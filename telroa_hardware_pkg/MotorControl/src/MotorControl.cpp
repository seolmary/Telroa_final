#include "MotorControl.hpp"

MotorControl::MotorControl(std::vector<int> motor_ids_i, std::vector<float> angle_offset_i, std::vector<int> min_angle_i, std::vector<int> max_angle_i)
{
    motor_ids = motor_ids_i;
    angle_offset = angle_offset_i;
    min_angle = min_angle_i;
    max_angle = max_angle_i;
    if(initMotor())
        return;
}
MotorControl::~MotorControl()
{
    for (int m_id:motor_ids) {
        packetHandler->write1ByteTxRx(portHandler, m_id, ADDR_TORQUE_ENABLE, 0, &dxl_error);
    }
    portHandler->closePort();
}
int MotorControl::initMotor()
{

    int dxl_comm_result = COMM_TX_FAIL;

    packetHandler = dynamixel::PacketHandler::getPacketHandler(PROTOCOL_VERSION);
    portHandler = dynamixel::PortHandler::getPortHandler(DEVICE_NAME);

    if(portHandler->openPort() == false)
    {
        std::cout<<"Failed to open the port!"<<std::endl;
        return 1;
    }
    if(portHandler->setBaudRate(BAUDRATE) == false)
    {
        std::cout<<"Failed to set the baudrate!"<<std::endl;
        return 1;
    }

    for (int m_id:motor_ids)
    {
        dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, m_id, ADDR_OPERATING_MODE, OPERATING_MODE_POSITION, &dxl_error);
        if (dxl_comm_result != COMM_SUCCESS)
        {
            std::cout<<"Failed to set operating mode to position control for DXL ID "<<m_id<<":"<<packetHandler->getTxRxResult(dxl_comm_result)<<std::endl;
            return 1;
        }
        else if (dxl_error != 0)
        {
            std::cout<<"Error setting operating mode for DXL ID "<<m_id<<":"<<packetHandler->getRxPacketError(dxl_error)<<std::endl;
            return 1; 
        }

        // Activate motor torque
        dxl_comm_result = packetHandler->write1ByteTxRx(portHandler, m_id, ADDR_TORQUE_ENABLE, 1, &dxl_error);
        if (dxl_comm_result != COMM_SUCCESS)
        {
            std::cout<<"Failed to enable torque for DXL ID "<<m_id<<":"<<packetHandler->getTxRxResult(dxl_comm_result)<<std::endl;
            return 1;
        }
        else if (dxl_error != 0)
        {
            std::cout<<"Error enabling torque for DXL ID "<<m_id<<":"<<packetHandler->getRxPacketError(dxl_error)<<std::endl;
            return 1 ;
        }

        dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, m_id, ADDR_GOAL_VELOCITY, 50, &dxl_error);
        if (dxl_comm_result != COMM_SUCCESS)
        {
            std::cout<<"Failed to enable velocity for DXL ID "<<m_id<<":"<<packetHandler->getTxRxResult(dxl_comm_result)<<std::endl;
            return 1;
        }
        else if (dxl_error != 0)
        {
            std::cout<<"Error enabling velocity for DXL ID "<<m_id<<":"<<packetHandler->getRxPacketError(dxl_error)<<std::endl;
            return 1 ;
        }
    }

    std::cout<<"Dynamixel setting complete"<<std::endl;
    //groupSyncWrite = new dynamixel::GroupSyncWrite(portHandler, packetHandler, ADDR_GOAL_POSITION, LEN_GOAL_POSITION);
    return 0;

};

void MotorControl::driveMotor(std::vector<float> angles)
{
    for (int i = 0; i < static_cast<int>(motor_ids.size()); i++)
    {
        int converted_angle = static_cast<int>((angles[i] +angle_offset[i])* 4095 / (2 * M_PI));
        converted_angle = (converted_angle<min_angle[i]?min_angle[i]:converted_angle);
        converted_angle = (converted_angle>max_angle[i]?max_angle[i]:converted_angle);
        this->setGoalPosition(motor_ids[i], converted_angle);
    }
}


void MotorControl::setGoalPosition(int motor_id,int goal_position)
{

    uint8_t dxl_error = 0;
    int dxl_comm_result = packetHandler->write4ByteTxRx(portHandler, motor_id, ADDR_GOAL_POSITION, goal_position,
                                                        &dxl_error);
    if (dxl_comm_result != COMM_SUCCESS)
    {
        std::cout<<"Failed to set goal position for DXL ID "<<motor_id<<":"<<packetHandler->getTxRxResult(dxl_comm_result);

    }
    else if (dxl_error != 0)
    {
        std::cout<<"Error setting goal position for DXL ID "<<motor_id<<":"<<packetHandler->getRxPacketError(dxl_error)<<std::endl;
    }
    else
    {
      // RCLCPP_INFO(this->get_logger(), "Set Goal Position for DXL ID %d to: %d", dxl_id, goal_position);
      std::cout<<"Set Goal Position for DXL ID"<<motor_id<<"to: "<<goal_position<<std::endl; 
    }

}


/*void MotorControl::driveMotorSync(std::vector<float> angles)
{
    for(int i=0;i<angles.size();i++)
    {
        int converted_angle = static_cast<int>((angles[i] +angle_offset[i])* 4095 / (2 * M_PI));
        converted_angle = (converted_angle<min_angle[i]?min_angle[i]:converted_angle);
        converted_angle = (converted_angle>max_angle[i]?max_angle[i]:converted_angle);
        param_goal_position[0] = DXL_LOBYTE(DXL_LOWORD(converted_angle));
        param_goal_position[1] = DXL_HIBYTE(DXL_LOWORD(converted_angle));
        param_goal_position[2] = DXL_LOBYTE(DXL_HIWORD(converted_angle));
        param_goal_position[3] = DXL_HIBYTE(DXL_HIWORD(converted_angle));

        groupSyncWrite->addParam(motor_ids[i], param_goal_position);
    }
    groupSyncWrite->txPacket();
    groupSyncWrite->clearParam();


}*/
