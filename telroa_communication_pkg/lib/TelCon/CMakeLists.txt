cmake_minimum_required(VERSION 3.8)
project(TelCon)

add_library(${PROJECT_NAME} STATIC
        src/TelCon.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        include
)

target_link_libraries(${PROJECT_NAME}
            ThreadGenerator
)