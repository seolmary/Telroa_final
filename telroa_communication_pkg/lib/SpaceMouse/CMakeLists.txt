cmake_minimum_required(VERSION 3.8)
project(SpaceMouse)

add_library(${PROJECT_NAME} STATIC
        src/SpaceMouse.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        include
)