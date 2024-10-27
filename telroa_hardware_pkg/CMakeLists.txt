cmake_minimum_required(VERSION 3.8)
project(telroa_hardware_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(telroa_interface_pkg REQUIRED)
find_package(std_msgs REQUIRED)
find_package(dynamixel_sdk REQUIRED)
find_package(Eigen3 REQUIRED)

# add_subdirectory(InverseKinematics)
add_subdirectory(MotorControl)

include_directories(
  include
  InverseKinematics/include
  ${rclcpp_INCLUDE_DIRS}
  ${std_msgs_INCLUDE_DIRS}
  ${dynamixel_sdk_INCLUDE_DIRS}
  ${telroa_interface_pkg_INCLUDE_DIRS}
)

add_executable(hard_node  src/hard_node.cpp)
target_include_directories(hard_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(hard_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(hard_node rclcpp telroa_interface_pkg std_msgs dynamixel_sdk)
target_link_libraries(hard_node
        motorcontrol
)

add_executable(ik_node  src/ik.cpp
                        InverseKinematics/src/IKSolver2.cpp)
target_include_directories(ik_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(ik_node PUBLIC c_std_99 cxx_std_17)  # Require C99 and C++17
ament_target_dependencies(ik_node
  rclcpp
  std_msgs
  dynamixel_sdk
  telroa_interface_pkg
)
target_link_libraries(ik_node Eigen3::Eigen)



install(TARGETS
  hard_node
  ik_node
  DESTINATION lib/${PROJECT_NAME})


ament_package()
