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
CMAKE_SOURCE_DIR = /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug

# Include any dependencies generated for this target.
include src/CMakeFiles/Test.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/Test.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/Test.dir/flags.make

src/CMakeFiles/Test.dir/Facade.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/Facade.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/Facade.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/Test.dir/Facade.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/Facade.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/Facade.cpp

src/CMakeFiles/Test.dir/Facade.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/Facade.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/Facade.cpp > CMakeFiles/Test.dir/Facade.cpp.i

src/CMakeFiles/Test.dir/Facade.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/Facade.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/Facade.cpp -o CMakeFiles/Test.dir/Facade.cpp.s

src/CMakeFiles/Test.dir/Facade.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/Facade.cpp.o.requires

src/CMakeFiles/Test.dir/Facade.cpp.o.provides: src/CMakeFiles/Test.dir/Facade.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/Facade.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/Facade.cpp.o.provides

src/CMakeFiles/Test.dir/Facade.cpp.o.provides.build: src/CMakeFiles/Test.dir/Facade.cpp.o


src/CMakeFiles/Test.dir/SystemA.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/SystemA.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemA.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/Test.dir/SystemA.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/SystemA.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemA.cpp

src/CMakeFiles/Test.dir/SystemA.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/SystemA.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemA.cpp > CMakeFiles/Test.dir/SystemA.cpp.i

src/CMakeFiles/Test.dir/SystemA.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/SystemA.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemA.cpp -o CMakeFiles/Test.dir/SystemA.cpp.s

src/CMakeFiles/Test.dir/SystemA.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/SystemA.cpp.o.requires

src/CMakeFiles/Test.dir/SystemA.cpp.o.provides: src/CMakeFiles/Test.dir/SystemA.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/SystemA.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/SystemA.cpp.o.provides

src/CMakeFiles/Test.dir/SystemA.cpp.o.provides.build: src/CMakeFiles/Test.dir/SystemA.cpp.o


src/CMakeFiles/Test.dir/SystemB.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/SystemB.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/Test.dir/SystemB.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/SystemB.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemB.cpp

src/CMakeFiles/Test.dir/SystemB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/SystemB.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemB.cpp > CMakeFiles/Test.dir/SystemB.cpp.i

src/CMakeFiles/Test.dir/SystemB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/SystemB.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemB.cpp -o CMakeFiles/Test.dir/SystemB.cpp.s

src/CMakeFiles/Test.dir/SystemB.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/SystemB.cpp.o.requires

src/CMakeFiles/Test.dir/SystemB.cpp.o.provides: src/CMakeFiles/Test.dir/SystemB.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/SystemB.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/SystemB.cpp.o.provides

src/CMakeFiles/Test.dir/SystemB.cpp.o.provides.build: src/CMakeFiles/Test.dir/SystemB.cpp.o


src/CMakeFiles/Test.dir/SystemC.cpp.o: src/CMakeFiles/Test.dir/flags.make
src/CMakeFiles/Test.dir/SystemC.cpp.o: /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemC.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/Test.dir/SystemC.cpp.o"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Test.dir/SystemC.cpp.o -c /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemC.cpp

src/CMakeFiles/Test.dir/SystemC.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Test.dir/SystemC.cpp.i"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemC.cpp > CMakeFiles/Test.dir/SystemC.cpp.i

src/CMakeFiles/Test.dir/SystemC.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Test.dir/SystemC.cpp.s"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && /usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src/SystemC.cpp -o CMakeFiles/Test.dir/SystemC.cpp.s

src/CMakeFiles/Test.dir/SystemC.cpp.o.requires:

.PHONY : src/CMakeFiles/Test.dir/SystemC.cpp.o.requires

src/CMakeFiles/Test.dir/SystemC.cpp.o.provides: src/CMakeFiles/Test.dir/SystemC.cpp.o.requires
	$(MAKE) -f src/CMakeFiles/Test.dir/build.make src/CMakeFiles/Test.dir/SystemC.cpp.o.provides.build
.PHONY : src/CMakeFiles/Test.dir/SystemC.cpp.o.provides

src/CMakeFiles/Test.dir/SystemC.cpp.o.provides.build: src/CMakeFiles/Test.dir/SystemC.cpp.o


# Object files for target Test
Test_OBJECTS = \
"CMakeFiles/Test.dir/Facade.cpp.o" \
"CMakeFiles/Test.dir/SystemA.cpp.o" \
"CMakeFiles/Test.dir/SystemB.cpp.o" \
"CMakeFiles/Test.dir/SystemC.cpp.o"

# External object files for target Test
Test_EXTERNAL_OBJECTS =

src/libTest.a: src/CMakeFiles/Test.dir/Facade.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/SystemA.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/SystemB.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/SystemC.cpp.o
src/libTest.a: src/CMakeFiles/Test.dir/build.make
src/libTest.a: src/CMakeFiles/Test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libTest.a"
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean_target.cmake
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/Test.dir/build: src/libTest.a

.PHONY : src/CMakeFiles/Test.dir/build

src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/Facade.cpp.o.requires
src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/SystemA.cpp.o.requires
src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/SystemB.cpp.o.requires
src/CMakeFiles/Test.dir/requires: src/CMakeFiles/Test.dir/SystemC.cpp.o.requires

.PHONY : src/CMakeFiles/Test.dir/requires

src/CMakeFiles/Test.dir/clean:
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src && $(CMAKE_COMMAND) -P CMakeFiles/Test.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/Test.dir/clean

src/CMakeFiles/Test.dir/depend:
	cd /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式 /home/zzp/Programs/ITBase/DesignPattern/结构型模式/外观模式/src /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src /home/zzp/Programs/ITBase/DesignPattern/结构型模式/build-u5916u89c2u6a21u5f0f-Desktop-Debug/src/CMakeFiles/Test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/Test.dir/depend

