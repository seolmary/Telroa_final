# Install script for directory: /home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rosidl_interfaces" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_index/share/ament_index/resource_index/rosidl_interfaces/telroa_interface_pkg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telroa_interface_pkg/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_c/telroa_interface_pkg/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/opt/ros/humble/lib/python3.10/site-packages/ament_package/template/environment_hook/library_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/library_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_generator_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telroa_interface_pkg/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_typesupport_fastrtps_c/telroa_interface_pkg/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telroa_interface_pkg/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_typesupport_introspection_c/telroa_interface_pkg/" REGEX "/[^/]*\\.h$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_typesupport_c.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_c.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telroa_interface_pkg/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_cpp/telroa_interface_pkg/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telroa_interface_pkg/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_typesupport_fastrtps_cpp/telroa_interface_pkg/" REGEX "/[^/]*\\.cpp$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_fastrtps_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/telroa_interface_pkg/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_typesupport_introspection_cpp/telroa_interface_pkg/" REGEX "/[^/]*\\.hpp$")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_introspection_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/libtelroa_interface_pkg__rosidl_typesupport_cpp.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so"
         OLD_RPATH "/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_typesupport_cpp.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/pythonpath.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/pythonpath.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg-0.0.0-py3.10.egg-info" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_python/telroa_interface_pkg/telroa_interface_pkg.egg-info/")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg" TYPE DIRECTORY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg/" REGEX "/[^/]*\\.pyc$" EXCLUDE REGEX "/\\_\\_pycache\\_\\_$" EXCLUDE)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(
        COMMAND
        "/usr/bin/python3" "-m" "compileall"
        "/usr/local/local/lib/python3.10/dist-packages/telroa_interface_pkg"
      )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg:/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_fastrtps_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/telroa_interface_pkg__rosidl_typesupport_fastrtps_c__pyext.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg:/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_introspection_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/telroa_interface_pkg__rosidl_typesupport_introspection_c__pyext.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg:/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/local/lib/python3.10/dist-packages/telroa_interface_pkg/telroa_interface_pkg_s__rosidl_typesupport_c.cpython-310-x86_64-linux-gnu.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/telroa_interface_pkg__rosidl_typesupport_c__pyext.dir/install-cxx-module-bmi-Release.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_generator_py/telroa_interface_pkg/libtelroa_interface_pkg__rosidl_generator_py.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so"
         OLD_RPATH "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtelroa_interface_pkg__rosidl_generator_py.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_adapter/telroa_interface_pkg/msg/XBox.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_adapter/telroa_interface_pkg/msg/SpaceMouse.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_adapter/telroa_interface_pkg/msg/TelCon.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_adapter/telroa_interface_pkg/msg/TwoSixTheta.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/srv" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_adapter/telroa_interface_pkg/srv/Example.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/action" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_adapter/telroa_interface_pkg/action/Example.idl")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/msg/XBox.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/msg/SpaceMouse.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/msg/TelCon.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/msg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/msg/TwoSixTheta.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/srv" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/srv/Example.srv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/srv" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_cmake/srv/Example_Request.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/srv" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_cmake/srv/Example_Response.msg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/action" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/action/Example.action")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/telroa_interface_pkg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/telroa_interface_pkg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/opt/ros/humble/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/environment" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_index/share/ament_index/resource_index/packages/telroa_interface_pkg")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_introspection_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_introspection_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_introspection_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_cExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_cExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_cExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cppExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_cppExport.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_typesupport_fastrtps_cppExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_introspection_cppExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cppExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cppExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_cppExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cppExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/telroa_interface_pkg__rosidl_typesupport_cppExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_cppExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/telroa_interface_pkg__rosidl_typesupport_cppExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_pyExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_pyExport.cmake"
         "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_pyExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_pyExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake/export_telroa_interface_pkg__rosidl_generator_pyExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_pyExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/CMakeFiles/Export/5a2aab8904f5389fcd852b36614904c3/export_telroa_interface_pkg__rosidl_generator_pyExport-release.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_cmake/rosidl_cmake-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_export_dependencies/ament_cmake_export_dependencies-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_export_include_directories/ament_cmake_export_include_directories-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_export_libraries/ament_cmake_export_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_cmake/rosidl_cmake_export_typesupport_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/rosidl_cmake/rosidl_cmake_export_typesupport_libraries-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg/cmake" TYPE FILE FILES
    "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_core/telroa_interface_pkgConfig.cmake"
    "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/ament_cmake_core/telroa_interface_pkgConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/telroa_interface_pkg" TYPE FILE FILES "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/telroa_interface_pkg__py/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/starlight/Github/Telroa_ws_gazebo/src/telroa_interface_pkg/cmake-build-release/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
