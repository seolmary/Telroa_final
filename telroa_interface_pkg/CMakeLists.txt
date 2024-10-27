cmake_minimum_required(VERSION 3.8)
project(telroa_interface_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)

set(msgs
        "msg/XBox.msg"
        "msg/SpaceMouse.msg"
        "msg/TelCon.msg"
        "msg/TwoSixTheta.msg"
)

set(srvs
        "srv/Example.srv"
)

set(actions
        "action/Example.action"
)

rosidl_generate_interfaces(${PROJECT_NAME}
        ${msgs}
        ${srvs}
        ${actions}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
