cmake_minimum_required(VERSION 3.8)
project(XBox)

add_library(${PROJECT_NAME} STATIC
        src/XBox.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        include
)