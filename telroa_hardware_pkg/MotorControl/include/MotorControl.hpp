
#ifndef MOTORCONTROL_H
#define MOTORCONTROL_H
#include "dynamixel_sdk/dynamixel_sdk.h"
#include <iostream>
#include <vector>
#include <cmath>


// Control table address
#define ADDR_OPERATING_MODE   11
#define ADDR_TORQUE_ENABLE    64              // Torque on/off control
#define ADDR_GOAL_VELOCITY    104             // speed control
#define ADDR_GOAL_POSITION    116             // position control
#define ADDR_PRESENT_POSITION 132             // Current location

// Protocol version
#define PROTOCOL_VERSION      2.0             // Default Protocol version of DYNAMIXEL X series.

// Default setting
#define DXL101_ID               101               
#define DXL102_ID               102              
#define DXL103_ID               103              
#define DXL104_ID               104              
#define DXL105_ID               105              
#define DXL106_ID               106
#define DXL107_ID               107
#define DXL108_ID               108

#define DXL201_ID               201
#define DXL202_ID               202                
#define DXL203_ID               203                
#define DXL204_ID               204                
#define DXL205_ID               205                
#define DXL206_ID               206
#define DXL207_ID               207
#define DXL208_ID               208

#define GRASP_ON                (220.0/180.0 * M_PI)
#define GRASP_OFF               (190.0/180.0 * M_PI)

#define BAUDRATE             4615384
#define DEVICE_NAME           "/dev/ttyUSB0"

#define OPERATING_MODE_POSITION 3             // Position control mode

class MotorControl
{
    public:
        MotorControl(std::vector<int> motor_ids_i, std::vector<float> angle_offset_i, std::vector<int> min_angle_i, std::vector<int> max_angle_i);
        ~MotorControl();
        int initMotor();
        void driveMotor(std::vector<float> angles);
        //void driveMotorSync(std::vector<float> angles);
    private:
        void setGoalPosition(int motor_id, int goal_position);
        dynamixel::PortHandler* portHandler;
        dynamixel::PacketHandler* packetHandler;
        std::vector<int> motor_ids; 
        std::vector<float> angle_offset;
        std::vector<int> min_angle;
        std::vector<int> max_angle;
        uint8_t dxl_error = 0;
        //dynamixel::GroupSyncWrite* groupSyncWrite;
        //int param_goal_position[4];

};

#endif