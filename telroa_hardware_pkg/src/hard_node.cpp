//ros2 topic pub --once topic telroa_interface_pkg/msg/FiveTheta '{theta1 : 1.0, theta2 : 2.0, theta3 : 3.0, theta4 : 4.0, theta5 : 5.0 }'

#include <functional>
#include <memory>
#include <cmath>

#include "rclcpp/rclcpp.hpp"
#include "telroa_interface_pkg/msg/two_six_theta.hpp"
#include "MotorControl.hpp"

using std::placeholders::_1;


std::vector<int> motor_ids      = {DXL101_ID, DXL102_ID, DXL103_ID, DXL104_ID, DXL105_ID, DXL106_ID, DXL107_ID, DXL108_ID,
                                   DXL201_ID, DXL202_ID, DXL203_ID, DXL204_ID, DXL205_ID, DXL206_ID, DXL207_ID, DXL208_ID};
std::vector<float> angle_offset = {M_PI     , M_PI     , M_PI     , M_PI     , M_PI     , M_PI     , M_PI     , 0    ,
                                   M_PI     , M_PI     , M_PI     , M_PI     , M_PI     , M_PI     , M_PI     , 0     };
std::vector<int> min_angle      = {340      , 340      , 800      , 800      , 1024     , 1024     , 1024     , 1800
                                   ,340      , 340      , 800      , 800      , 1024     , 1024     , 1024     , 1800     };
std::vector<int> max_angle      = {3415     , 3415     , 3000     , 3000     , 3072     , 3072     , 3072     , 2550     ,
                                   3415     , 3415     , 3000     , 3000     , 3072     , 3072     , 3072     , 2550     };

MotorControl motorcontrol(motor_ids,angle_offset,min_angle,max_angle);

class AngleSubscriber : public rclcpp::Node
{
public:
  AngleSubscriber()
    : Node("angleSubscriber")
  {
    subscription_ = this->create_subscription<telroa_interface_pkg::msg::TwoSixTheta>(
      "topic", 10, std::bind(&AngleSubscriber::topic_callback, this, _1));
  }

  rclcpp::Publisher<telroa_interface_pkg::msg::TwoSixTheta>::SharedPtr publisher_;


private:
  void topic_callback(const telroa_interface_pkg::msg::TwoSixTheta& angles)
  {
    _angles = angles;
    std::vector<float> angles_v = {2*_angles.theta_l1, 2*_angles.theta_l1, _angles.theta_l2, _angles.theta_l2, _angles.theta_l3, _angles.theta_l4, _angles.theta_l5, _angles.theta_l6,
                                   2*_angles.theta_r1, 2*_angles.theta_r1, _angles.theta_r2, _angles.theta_r2, _angles.theta_r3, _angles.theta_r4, _angles.theta_r5, _angles.theta_r6,};
    motorcontrol.driveMotor(angles_v);
  }

  rclcpp::Subscription<telroa_interface_pkg::msg::TwoSixTheta>::SharedPtr subscription_;
  telroa_interface_pkg::msg::TwoSixTheta _angles;

};

int main(int argc, char* argv[])
{
  rclcpp::init(argc, argv);
  auto test_node = std::make_shared<AngleSubscriber>();
  rclcpp::spin(test_node);
  rclcpp::shutdown();
  return 0;
}
