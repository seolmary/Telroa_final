#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "telroa_interface_pkg/msg/two_six_theta.hpp"
#include "telroa_interface_pkg/msg/space_mouse.hpp"
#include "telroa_interface_pkg/msg/x_box.hpp"
#include "IKSolver2.hpp"
#include "../MotorControl/include/MotorControl.hpp"
#include "std_msgs/msg/float64.hpp"

using namespace std::chrono_literals;
using std::placeholders::_1;


class IKNode : public rclcpp::Node
{
  public:
    IKNode()
    : Node("ik_node")
    {
      initializeRobotLink();
      initializeScrew();
      computedTheta_l = Eigen::Matrix<float,5,1>::Zero();
      computedTheta_r = Eigen::Matrix<float,5,1>::Zero();
      desiredPosition_l = Eigen::Matrix<float,3,1>::Zero();
      desiredPosition_r = Eigen::Matrix<float,3,1>::Zero();
      desiredPosition_l << 480.0,10,280;
      desiredPosition_r << 480.0,10,280;
      subscription_ = this->create_subscription<telroa_interface_pkg::msg::XBox>(
      "telroa_xbox", 10, std::bind(&IKNode::topic_callback, this, _1));
      publisher_ = this->create_publisher<telroa_interface_pkg::msg::TwoSixTheta>("topic", 10);
      /*publisher_1 = this->create_publisher<std_msgs::msg::Float64>("/rotor_cmd1", 10);
      publisher_2 = this->create_publisher<std_msgs::msg::Float64>("/rotor_cmd2", 10);
      publisher_3 = this->create_publisher<std_msgs::msg::Float64>("/rotor_cmd3", 10);
      publisher_4 = this->create_publisher<std_msgs::msg::Float64>("/rotor_cmd4", 10);
      publisher_5 = this->create_publisher<std_msgs::msg::Float64>("/rotor_cmd5", 10);*/

      timer_ = this->create_wall_timer(1ms, std::bind(&IKNode::timer_callback, this));
    }

  private:
  bool prevButton = false;
    void topic_callback(const telroa_interface_pkg::msg::XBox &input)
    {
      //LEFT HAND
      std::cout << "\033c";
      std::cout << "===============INPUT1===============" << std::endl;
      std::cout <<"x:"<<desiredPosition_l(0)<< "\ty:" <<desiredPosition_l(1) << "\tz:" << desiredPosition_l(2)<<std::endl;
      std::cout << "norm: " << desiredPosition_l.norm() << std::endl;
      std::cout << "===============RESULT1===============" << std::endl;
      std::cout<<"theta1(deg):"<<ans.theta_l1*180/M_PI<< "\ntheta2(deg):" <<ans.theta_l2*180/M_PI << "\ntheta3(deg): " << ans.theta_l3*180/M_PI<<"\ntheta4(deg):" <<ans.theta_l4*180/M_PI << "\ntheta5(deg): " << ans.theta_l5*180/M_PI <<std::endl;
      //std::cout << "===============FORWARD KINEMATICS USING RESULT1===============" << std::endl;
      desiredPosition_l(1)+=(abs(input.axis[0])>9000  ?  input.axis[0]/abs(input.axis[0])*0.3 :  0);
      desiredPosition_l(0)-=(abs(input.axis[1])>9000  ?  input.axis[1]/abs(input.axis[1])*0.3  : 0);
      desiredPosition_l(2)-=(input.axis[2] >9000  ?  0.3  :  0);
      if(input.button[4])
        desiredPosition_l(2) += 0.3;
      if(input.button[0] != prevButton && input.button[0])
      {
        index = !index;
      }

      prevButton = input.button[0];


      //RIGHT HAND
      std::cout << "===============INPUT2===============" << std::endl;
      std::cout <<"x:"<<desiredPosition_r(0)<< "\ty:" <<desiredPosition_r(1) << "\tz:" << desiredPosition_r(2)<<std::endl;
      std::cout << "norm: " << desiredPosition_r.norm() << std::endl;
      std::cout << "===============RESULT2===============" << std::endl;
      std::cout<<"theta1(deg):"<<ans.theta_r1*180/M_PI<< "\ntheta2(deg):" <<ans.theta_r2*180/M_PI << "\ntheta3(deg): " << ans.theta_r3*180/M_PI<<"\ntheta4(deg):" <<ans.theta_r4*180/M_PI << "\ntheta5(deg): " << ans.theta_r5*180/M_PI <<std::endl;
      //std::cout << "===============FORWARD KINEMATICS USING RESULT2===============" << std::endl;
      desiredPosition_r(1)+=(abs(input.axis[3])>9000  ?  input.axis[3]/abs(input.axis[3])*0.3 :  0);
      desiredPosition_r(0)-=(abs(input.axis[4])>9000  ?  input.axis[4]/abs(input.axis[4])*0.3  : 0);
      desiredPosition_r(2)-=(input.axis[5] >9000  ?  0.3  :  0);
      if(input.button[5])
        desiredPosition_r(2) += 0.3;
      std::cout << "INDEX = " << index << std::endl;


    }
    void timer_callback()
    {
      inverse_kinematics();
      publisher_->publish(ans);
    }
    void inverse_kinematics()
    {
      if(index)
      {
        ans.theta_l6 = GRASP_ON;
        ans.theta_r6 = GRASP_ON;
      }
      else
      {
        ans.theta_l6 = GRASP_OFF;
        ans.theta_r6 = GRASP_OFF;
      }
      
      computedTheta_l = ComputeNumericalInverseKinematicsPosition(computedTheta_l,desiredPosition_l);
      ans.theta_l1 = static_cast<float>(computedTheta_l(0));
      ans.theta_l2 = static_cast<float>(computedTheta_l(1));
      ans.theta_l3 = static_cast<float>(computedTheta_l(2));
      ans.theta_l4 = static_cast<float>(computedTheta_l(3));
      ans.theta_l5 = static_cast<float>(computedTheta_l(4));

      computedTheta_r = ComputeNumericalInverseKinematicsPosition(computedTheta_r,desiredPosition_r);
      ans.theta_r1 = static_cast<float>(computedTheta_r(0));
      ans.theta_r2 = static_cast<float>(computedTheta_r(1));
      ans.theta_r3 = static_cast<float>(computedTheta_r(2));
      ans.theta_r4 = static_cast<float>(computedTheta_r(3));
      ans.theta_r5 = static_cast<float>(computedTheta_r(4));

      /*auto msg1 = std_msgs::msg::Float64();
      msg1.data = ans.theta1;
      auto msg2 = std_msgs::msg::Float64();
      msg2.data = ans.theta2;
      auto msg3 = std_msgs::msg::Float64();
      msg3.data = ans.theta3;
      auto msg4 = std_msgs::msg::Float64();
      msg4.data = ans.theta4;
      auto msg5 = std_msgs::msg::Float64();
      msg5.data = ans.theta5;*/

      /*
      publisher_1->publish(msg1);
      publisher_2->publish(msg2);
      publisher_3->publish(msg3);
      publisher_4->publish(msg4);
      publisher_5->publish(msg5);*/

    }
    telroa_interface_pkg::msg::TwoSixTheta ans;
    Eigen::Matrix<float,5,1> computedTheta_l;
    Eigen::Matrix<float,5,1> computedTheta_r;
    Eigen::Matrix<float,3,1> desiredPosition_l;
    Eigen::Matrix<float,3,1> desiredPosition_r;
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Subscription<telroa_interface_pkg::msg::XBox>::SharedPtr subscription_;
    rclcpp::Publisher<telroa_interface_pkg::msg::TwoSixTheta>::SharedPtr publisher_;
    bool index = false;
    /*rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_1;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_2;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_3;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_4;
    rclcpp::Publisher<std_msgs::msg::Float64>::SharedPtr publisher_5;*/
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  
  rclcpp::spin(std::make_shared<IKNode>());
  rclcpp::shutdown();
  return 0;
}
