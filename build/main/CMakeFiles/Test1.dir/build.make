# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/barrypai/BarryTest

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/barrypai/BarryTest/build

# Include any dependencies generated for this target.
include main/CMakeFiles/Test1.dir/depend.make

# Include the progress variables for this target.
include main/CMakeFiles/Test1.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/Test1.dir/flags.make

main/CMakeFiles/Test1.dir/src/test1.cpp.o: main/CMakeFiles/Test1.dir/flags.make
main/CMakeFiles/Test1.dir/src/test1.cpp.o: ../main/src/test1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/barrypai/BarryTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object main/CMakeFiles/Test1.dir/src/test1.cpp.o"
	cd /home/barrypai/BarryTest/build/main && /bin/x86_64-linux-gnu-g++-9  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test1.dir/src/test1.cpp.o -c /home/barrypai/BarryTest/main/src/test1.cpp

main/CMakeFiles/Test1.dir/src/test1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test1.dir/src/test1.cpp.i"
	cd /home/barrypai/BarryTest/build/main && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/barrypai/BarryTest/main/src/test1.cpp > CMakeFiles/Test1.dir/src/test1.cpp.i

main/CMakeFiles/Test1.dir/src/test1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test1.dir/src/test1.cpp.s"
	cd /home/barrypai/BarryTest/build/main && /bin/x86_64-linux-gnu-g++-9 $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/barrypai/BarryTest/main/src/test1.cpp -o CMakeFiles/Test1.dir/src/test1.cpp.s

# Object files for target Test1
Test1_OBJECTS = \
"CMakeFiles/Test1.dir/src/test1.cpp.o"

# External object files for target Test1
Test1_EXTERNAL_OBJECTS =

bin/Release/Test1: main/CMakeFiles/Test1.dir/src/test1.cpp.o
bin/Release/Test1: main/CMakeFiles/Test1.dir/build.make
bin/Release/Test1: bin/Release/libElement.so
bin/Release/Test1: bin/Release/libPoint.so
bin/Release/Test1: main/CMakeFiles/Test1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/barrypai/BarryTest/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../bin/Release/Test1"
	cd /home/barrypai/BarryTest/build/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/Test1.dir/build: bin/Release/Test1

.PHONY : main/CMakeFiles/Test1.dir/build

main/CMakeFiles/Test1.dir/clean:
	cd /home/barrypai/BarryTest/build/main && $(CMAKE_COMMAND) -P CMakeFiles/Test1.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/Test1.dir/clean

main/CMakeFiles/Test1.dir/depend:
	cd /home/barrypai/BarryTest/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/barrypai/BarryTest /home/barrypai/BarryTest/main /home/barrypai/BarryTest/build /home/barrypai/BarryTest/build/main /home/barrypai/BarryTest/build/main/CMakeFiles/Test1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/Test1.dir/depend

