# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_SOURCE_DIR = /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/Bridge.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Bridge.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Bridge.dir/flags.make

CMakeFiles/Bridge.dir/main.cpp.o: CMakeFiles/Bridge.dir/flags.make
CMakeFiles/Bridge.dir/main.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Bridge.dir/main.cpp.o"
	/usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Bridge.dir/main.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式/main.cpp

CMakeFiles/Bridge.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Bridge.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式/main.cpp > CMakeFiles/Bridge.dir/main.cpp.i

CMakeFiles/Bridge.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Bridge.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式/main.cpp -o CMakeFiles/Bridge.dir/main.cpp.s

CMakeFiles/Bridge.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Bridge.dir/main.cpp.o.requires

CMakeFiles/Bridge.dir/main.cpp.o.provides: CMakeFiles/Bridge.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Bridge.dir/build.make CMakeFiles/Bridge.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Bridge.dir/main.cpp.o.provides

CMakeFiles/Bridge.dir/main.cpp.o.provides.build: CMakeFiles/Bridge.dir/main.cpp.o


# Object files for target Bridge
Bridge_OBJECTS = \
"CMakeFiles/Bridge.dir/main.cpp.o"

# External object files for target Bridge
Bridge_EXTERNAL_OBJECTS =

Bridge: CMakeFiles/Bridge.dir/main.cpp.o
Bridge: CMakeFiles/Bridge.dir/build.make
Bridge: src/libTest.a
Bridge: CMakeFiles/Bridge.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Bridge"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Bridge.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Bridge.dir/build: Bridge

.PHONY : CMakeFiles/Bridge.dir/build

CMakeFiles/Bridge.dir/requires: CMakeFiles/Bridge.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Bridge.dir/requires

CMakeFiles/Bridge.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Bridge.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Bridge.dir/clean

CMakeFiles/Bridge.dir/depend:
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式 /home/zzp/Programs/ITBase/DesignPattern/行为型模式/中介者模式 /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u4e2du4ecbu8005u6a21u5f0f-Desktop-Debug/CMakeFiles/Bridge.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Bridge.dir/depend

