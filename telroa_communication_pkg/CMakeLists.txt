cmake_minimum_required(VERSION 3.8)
project(telroa_communication_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)

find_package(telroa_interface_pkg REQUIRED)

find_package(Qt5 CONFIG REQUIRED COMPONENTS Widgets)
find_package(Qt5 COMPONENTS Widgets Network REQUIRED)

add_subdirectory(lib)

add_executable(comm_node src/comm_node.cpp)
target_include_directories(comm_node PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include>)
target_compile_features(comm_node PUBLIC c_std_99 cxx_std_17)
ament_target_dependencies(comm_node rclcpp telroa_interface_pkg)
target_link_libraries(comm_node
        SpaceMouse
        TelCon
        XBox
        ThreadGenerator
        GUI
)

install(TARGETS comm_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
