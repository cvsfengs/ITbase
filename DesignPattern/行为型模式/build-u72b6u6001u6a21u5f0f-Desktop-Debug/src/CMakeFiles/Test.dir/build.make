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
CMAKE_SOURCE_DIR = /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug

# Include any dependencies generated for this target.
include src/CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Test.dir/flags.make

src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/ConcreteStatusA.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusA.cpp

src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/ConcreteStatusA.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusA.cpp > CMakeFiles/Test.dir/ConcreteStatusA.cpp.i

src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/ConcreteStatusA.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusA.cpp -o CMakeFiles/Test.dir/ConcreteStatusA.cpp.s

src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.requires

src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.provides: src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.provides

src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.provides.build: src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o


src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/ConcreteStatusB.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusB.cpp

src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/ConcreteStatusB.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusB.cpp > CMakeFiles/Test.dir/ConcreteStatusB.cpp.i

src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/ConcreteStatusB.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/ConcreteStatusB.cpp -o CMakeFiles/Test.dir/ConcreteStatusB.cpp.s

src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.requires

src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.provides: src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.provides

src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.provides.build: src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o


src/CMakeFiles/Test.dir/Context.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/Context.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Context.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/Test.dir/Context.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Context.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Context.cpp

src/CMakeFiles/Test.dir/Context.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Context.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Context.cpp > CMakeFiles/Test.dir/Context.cpp.i

src/CMakeFiles/Test.dir/Context.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Context.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Context.cpp -o CMakeFiles/Test.dir/Context.cpp.s

src/CMakeFiles/Test.dir/Context.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/Context.cpp.o.requires

src/CMakeFiles/Test.dir/Context.cpp.o.provides: src/CMakeFiles/Test.dir/Context.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/Context.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/Context.cpp.o.provides

src/CMakeFiles/Test.dir/Context.cpp.o.provides.build: src/CMakeFiles/Test.dir/Context.cpp.o


src/CMakeFiles/Test.dir/Status.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/Status.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Status.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/Test.dir/Status.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Status.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Status.cpp

src/CMakeFiles/Test.dir/Status.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Status.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Status.cpp > CMakeFiles/Test.dir/Status.cpp.i

src/CMakeFiles/Test.dir/Status.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Status.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src/Status.cpp -o CMakeFiles/Test.dir/Status.cpp.s

src/CMakeFiles/Test.dir/Status.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/Status.cpp.o.requires

src/CMakeFiles/Test.dir/Status.cpp.o.provides: src/CMakeFiles/Test.dir/Status.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/Status.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/Status.cpp.o.provides

src/CMakeFiles/Test.dir/Status.cpp.o.provides.build: src/CMakeFiles/Test.dir/Status.cpp.o


# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/ConcreteStatusA.cpp.o" \
"CMakeFiles/Test.dir/ConcreteStatusB.cpp.o" \
"CMakeFiles/Test.dir/Context.cpp.o" \
"CMakeFiles/Test.dir/Status.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

src/libTest.a: src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/Context.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/Status.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/build.make
src/libTest.a: src/CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libTest.a"
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean_target.cmake
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Test.dir/build: src/libTest.a

.PHONY : src/CMakeFiles/Test.dir/build

src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/ConcreteStatusA.cpp.o.requires
src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/ConcreteStatusB.cpp.o.requires
src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/Context.cpp.o.requires
src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/Status.cpp.o.requires

.PHONY : src/CMakeFiles/Test.dir/requires

src/CMakeFiles/Test.dir/clean:
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Test.dir/clean

src/CMakeFiles/Test.dir/depend:
	cd /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式 /home/zzp/Programs/ITBase/DesignPattern/行为型模式/状态模式/src /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src /home/zzp/Programs/ITBase/DesignPattern/行为型模式/build-u72b6u6001u6a21u5f0f-Desktop-Debug/src/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Test.dir/depend

