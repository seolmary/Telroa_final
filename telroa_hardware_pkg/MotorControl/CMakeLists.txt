cmake_minimum_required(VERSION 3.8)
project(motorcontrol)
set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} STATIC
        src/MotorControl.cpp

)

find_package(dynamixel_sdk REQUIRED)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        include
)

include_directories(
  include
  ${dynamixel_sdk_INCLUDE_DIRS}
        
)


# target_link_libraries(${PROJECT_NAME} dynamixel_sdk) #To specify libraries to link against a given target.
target_link_libraries(${PROJECT_NAME}
        ${dynamixel_sdk_LIBRARIES} )


