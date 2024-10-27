cmake_minimum_required(VERSION 3.8)
project(IKSolver)
set(CMAKE_CXX_STANDARD 17)

add_library(${PROJECT_NAME} STATIC
        src/IKSolver2.cpp

)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        include
)



find_package(Eigen3 REQUIRED) #REQUIRED : Generates error if the package cannot be found.
target_link_libraries(${PROJECT_NAME} Eigen3::Eigen) #To specify libraries to link against a given target.