# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/pda/Programs/clion-2019.1.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/pda/Programs/clion-2019.1.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pda/CLionProjects/5task

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pda/CLionProjects/5task/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/5task.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/5task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/5task.dir/flags.make

CMakeFiles/5task.dir/main.cpp.o: CMakeFiles/5task.dir/flags.make
CMakeFiles/5task.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pda/CLionProjects/5task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/5task.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/5task.dir/main.cpp.o -c /home/pda/CLionProjects/5task/main.cpp

CMakeFiles/5task.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/5task.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pda/CLionProjects/5task/main.cpp > CMakeFiles/5task.dir/main.cpp.i

CMakeFiles/5task.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/5task.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pda/CLionProjects/5task/main.cpp -o CMakeFiles/5task.dir/main.cpp.s

# Object files for target 5task
5task_OBJECTS = \
"CMakeFiles/5task.dir/main.cpp.o"

# External object files for target 5task
5task_EXTERNAL_OBJECTS =

5task: CMakeFiles/5task.dir/main.cpp.o
5task: CMakeFiles/5task.dir/build.make
5task: CMakeFiles/5task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pda/CLionProjects/5task/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 5task"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/5task.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/5task.dir/build: 5task

.PHONY : CMakeFiles/5task.dir/build

CMakeFiles/5task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/5task.dir/cmake_clean.cmake
.PHONY : CMakeFiles/5task.dir/clean

CMakeFiles/5task.dir/depend:
	cd /home/pda/CLionProjects/5task/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pda/CLionProjects/5task /home/pda/CLionProjects/5task /home/pda/CLionProjects/5task/cmake-build-debug /home/pda/CLionProjects/5task/cmake-build-debug /home/pda/CLionProjects/5task/cmake-build-debug/CMakeFiles/5task.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/5task.dir/depend

