#include <chrono>
#include <functional>
#include <memory>
#include <string>

#include "rclcpp/rclcpp.hpp"
#include "telroa_interface_pkg/msg/space_mouse.hpp"
#include "telroa_interface_pkg/msg/tel_con.hpp"
#include "telroa_interface_pkg/msg/x_box.hpp"

#include "ControllerInfo.hpp"

#ifndef XBOX
#include "SpaceMouse.hpp"
#include "TelCon.hpp"
#endif
#ifdef XBOX
#include "XBox.hpp"
#endif

#include "mainwindow.hpp"

using namespace std::chrono_literals;

class MousePublisher : public rclcpp::Node
{
public:
  MousePublisher()
    : Node("mouse_publisher"), count_(0)
  {
#ifndef XBOX
    publisher_ = this->create_publisher<telroa_interface_pkg::msg::TelCon>("telroa_telcon", 10);
    publisher_2 = this->create_publisher<telroa_interface_pkg::msg::SpaceMouse>("telroa_mouse", 10);
#endif
#ifdef XBOX
    publisher_3 = this->create_publisher<telroa_interface_pkg::msg::XBox>("telroa_xbox", 10);
#endif
    timer_ = this->create_wall_timer(
      5ms, std::bind(&MousePublisher::timer_callback, this));
  }

private:
#ifndef XBOX
  TelCon* telCon = TelCon::getInstance();
  SpaceMouse* spaceMouse = new SpaceMouse();

  void setTelConMsg(telroa_interface_pkg::msg::TelCon& msg)
  {
    telCon->readIMUData();

    msg.roll = telCon->IMUAngle[0];
    msg.pitch = telCon->IMUAngle[1];
    msg.yaw = telCon->IMUAngle[2];

    msg.vx = telCon->IMUVel[0];
    msg.vy = telCon->IMUVel[1];
    msg.vz = telCon->IMUVel[2];

    msg.px = telCon->IMUPos[0];
    msg.py = telCon->IMUPos[1];
    msg.pz = telCon->IMUPos[2];

    msg.status = 0;
  }

  void setMouseMsg(telroa_interface_pkg::msg::SpaceMouse& msg)
  {
    spaceMouse->connRead();

    msg.x = spaceMouse->mouse.X;
    msg.y = spaceMouse->mouse.Y;
    msg.z = spaceMouse->mouse.Z;

    msg.roll = spaceMouse->mouse.Roll;
    msg.pitch = spaceMouse->mouse.Pitch;
    msg.yaw = spaceMouse->mouse.Yaw;

    msg.left = spaceMouse->mouse.LeftButton;
    msg.right = spaceMouse->mouse.RightButton;
  }
#endif
#ifdef XBOX
  XBox* xBox = XBox::getInstance();

  void setXboxMsg(telroa_interface_pkg::msg::XBox& msg)
  {
    xBox->Read();

    msg.button.resize(11);
    msg.axis.resize(8);

    std::copy(xBox->mJoystickButton, xBox->mJoystickButton + 11, msg.button.begin());
    std::copy(xBox->mJoystickAxis, xBox->mJoystickAxis + 8, msg.axis.begin());
  }
#endif

  void timer_callback()
  {
#ifndef XBOX
    auto message = telroa_interface_pkg::msg::TelCon();
    auto message2 = telroa_interface_pkg::msg::SpaceMouse();

    setTelConMsg(message);
    setMouseMsg(message2);

    publisher_->publish(message);
    publisher_2->publish(message2);
#endif
#ifdef XBOX
    auto message = telroa_interface_pkg::msg::XBox();

    setXboxMsg(message);

    publisher_3->publish(message);
#endif
  }

  rclcpp::TimerBase::SharedPtr timer_;
#ifndef XBOX
  rclcpp::Publisher<telroa_interface_pkg::msg::TelCon>::SharedPtr publisher_;
  rclcpp::Publisher<telroa_interface_pkg::msg::SpaceMouse>::SharedPtr publisher_2;
#endif
  rclcpp::Publisher<telroa_interface_pkg::msg::XBox>::SharedPtr publisher_3;
  size_t count_;
};

void ros_spin_thread(std::shared_ptr<rclcpp::Node> node)
{
  rclcpp::spin(node);
}

int main(int argc, char** argv)
{
  (void)argc;
  (void)argv;

  QApplication a(argc, argv);
  MainWindow w;

  rclcpp::init(argc, argv);

  auto node = std::make_shared<MousePublisher>();

  std::thread ros_thread(ros_spin_thread, node);

#ifndef XBOX
  TelCon::getInstance()->startThread();
#endif

  w.show();
  int ret = a.exec();

  rclcpp::shutdown();

  ros_thread.join();

  return 0;
}
