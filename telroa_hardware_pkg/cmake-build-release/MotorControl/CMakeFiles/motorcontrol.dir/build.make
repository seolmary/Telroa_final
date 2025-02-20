# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.29

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /snap/clion/296/bin/cmake/linux/x64/bin/cmake

# The command to remove a file.
RM = /snap/clion/296/bin/cmake/linux/x64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release

# Include any dependencies generated for this target.
include MotorControl/CMakeFiles/motorcontrol.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include MotorControl/CMakeFiles/motorcontrol.dir/compiler_depend.make

# Include the progress variables for this target.
include MotorControl/CMakeFiles/motorcontrol.dir/progress.make

# Include the compile flags for this target's objects.
include MotorControl/CMakeFiles/motorcontrol.dir/flags.make

MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o: MotorControl/CMakeFiles/motorcontrol.dir/flags.make
MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o: /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/MotorControl/src/MotorControl.cpp
MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o: MotorControl/CMakeFiles/motorcontrol.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o"
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o -MF CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o.d -o CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o -c /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/MotorControl/src/MotorControl.cpp

MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.i"
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/MotorControl/src/MotorControl.cpp > CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.i

MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.s"
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/MotorControl/src/MotorControl.cpp -o CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.s

# Object files for target motorcontrol
motorcontrol_OBJECTS = \
"CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o"

# External object files for target motorcontrol
motorcontrol_EXTERNAL_OBJECTS =

MotorControl/libmotorcontrol.a: MotorControl/CMakeFiles/motorcontrol.dir/src/MotorControl.cpp.o
MotorControl/libmotorcontrol.a: MotorControl/CMakeFiles/motorcontrol.dir/build.make
MotorControl/libmotorcontrol.a: MotorControl/CMakeFiles/motorcontrol.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libmotorcontrol.a"
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl && $(CMAKE_COMMAND) -P CMakeFiles/motorcontrol.dir/cmake_clean_target.cmake
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/motorcontrol.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
MotorControl/CMakeFiles/motorcontrol.dir/build: MotorControl/libmotorcontrol.a
.PHONY : MotorControl/CMakeFiles/motorcontrol.dir/build

MotorControl/CMakeFiles/motorcontrol.dir/clean:
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl && $(CMAKE_COMMAND) -P CMakeFiles/motorcontrol.dir/cmake_clean.cmake
.PHONY : MotorControl/CMakeFiles/motorcontrol.dir/clean

MotorControl/CMakeFiles/motorcontrol.dir/depend:
	cd /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/MotorControl /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl /home/starlight/Github/Telroa_ws_gazebo/src/telroa_hardware_pkg/cmake-build-release/MotorControl/CMakeFiles/motorcontrol.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : MotorControl/CMakeFiles/motorcontrol.dir/depend

