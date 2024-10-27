cmake_minimum_required(VERSION 3.8)
project(GUI)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets REQUIRED)

add_library(${PROJECT_NAME} STATIC
        mainwindow.cpp
        mainwindow.ui
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        .
)

target_link_libraries(${PROJECT_NAME}
        Qt${QT_VERSION_MAJOR}::Widgets
)

if (QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(NewGUI)
endif ()