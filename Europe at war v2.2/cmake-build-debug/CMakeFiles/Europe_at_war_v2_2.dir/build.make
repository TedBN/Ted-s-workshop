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
CMAKE_COMMAND = /cygdrive/c/Users/persi/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/persi/.CLion2017.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/f/Personal projects/Europe at war v2.2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Europe_at_war_v2_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Europe_at_war_v2_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Europe_at_war_v2_2.dir/flags.make

CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o: CMakeFiles/Europe_at_war_v2_2.dir/flags.make
CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o -c "/cygdrive/f/Personal projects/Europe at war v2.2/main.cpp"

CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/f/Personal projects/Europe at war v2.2/main.cpp" > CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.i

CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/f/Personal projects/Europe at war v2.2/main.cpp" -o CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.s

CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.requires

CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.provides: CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Europe_at_war_v2_2.dir/build.make CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.provides

CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.provides.build: CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o


CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o: CMakeFiles/Europe_at_war_v2_2.dir/flags.make
CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o: ../Building.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o -c "/cygdrive/f/Personal projects/Europe at war v2.2/Building.cpp"

CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/f/Personal projects/Europe at war v2.2/Building.cpp" > CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.i

CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/f/Personal projects/Europe at war v2.2/Building.cpp" -o CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.s

CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.requires:

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.requires

CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.provides: CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.requires
	$(MAKE) -f CMakeFiles/Europe_at_war_v2_2.dir/build.make CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.provides.build
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.provides

CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.provides.build: CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o


CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o: CMakeFiles/Europe_at_war_v2_2.dir/flags.make
CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o: ../Technology.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o -c "/cygdrive/f/Personal projects/Europe at war v2.2/Technology.cpp"

CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/f/Personal projects/Europe at war v2.2/Technology.cpp" > CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.i

CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/f/Personal projects/Europe at war v2.2/Technology.cpp" -o CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.s

CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.requires:

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.requires

CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.provides: CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.requires
	$(MAKE) -f CMakeFiles/Europe_at_war_v2_2.dir/build.make CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.provides.build
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.provides

CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.provides.build: CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o


CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o: CMakeFiles/Europe_at_war_v2_2.dir/flags.make
CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o: ../TechnologyController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o -c "/cygdrive/f/Personal projects/Europe at war v2.2/TechnologyController.cpp"

CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/f/Personal projects/Europe at war v2.2/TechnologyController.cpp" > CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.i

CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/f/Personal projects/Europe at war v2.2/TechnologyController.cpp" -o CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.s

CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.requires:

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.requires

CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.provides: CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.requires
	$(MAKE) -f CMakeFiles/Europe_at_war_v2_2.dir/build.make CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.provides.build
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.provides

CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.provides.build: CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o


CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o: CMakeFiles/Europe_at_war_v2_2.dir/flags.make
CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o: ../BuildingController.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o -c "/cygdrive/f/Personal projects/Europe at war v2.2/BuildingController.cpp"

CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/f/Personal projects/Europe at war v2.2/BuildingController.cpp" > CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.i

CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/f/Personal projects/Europe at war v2.2/BuildingController.cpp" -o CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.s

CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.requires:

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.requires

CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.provides: CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.requires
	$(MAKE) -f CMakeFiles/Europe_at_war_v2_2.dir/build.make CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.provides.build
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.provides

CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.provides.build: CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o


# Object files for target Europe_at_war_v2_2
Europe_at_war_v2_2_OBJECTS = \
"CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o" \
"CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o" \
"CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o" \
"CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o" \
"CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o"

# External object files for target Europe_at_war_v2_2
Europe_at_war_v2_2_EXTERNAL_OBJECTS =

Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o
Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o
Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o
Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o
Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o
Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/build.make
Europe_at_war_v2_2.exe: CMakeFiles/Europe_at_war_v2_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX executable Europe_at_war_v2_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Europe_at_war_v2_2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Europe_at_war_v2_2.dir/build: Europe_at_war_v2_2.exe

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/build

CMakeFiles/Europe_at_war_v2_2.dir/requires: CMakeFiles/Europe_at_war_v2_2.dir/main.cpp.o.requires
CMakeFiles/Europe_at_war_v2_2.dir/requires: CMakeFiles/Europe_at_war_v2_2.dir/Building.cpp.o.requires
CMakeFiles/Europe_at_war_v2_2.dir/requires: CMakeFiles/Europe_at_war_v2_2.dir/Technology.cpp.o.requires
CMakeFiles/Europe_at_war_v2_2.dir/requires: CMakeFiles/Europe_at_war_v2_2.dir/TechnologyController.cpp.o.requires
CMakeFiles/Europe_at_war_v2_2.dir/requires: CMakeFiles/Europe_at_war_v2_2.dir/BuildingController.cpp.o.requires

.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/requires

CMakeFiles/Europe_at_war_v2_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Europe_at_war_v2_2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/clean

CMakeFiles/Europe_at_war_v2_2.dir/depend:
	cd "/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/f/Personal projects/Europe at war v2.2" "/cygdrive/f/Personal projects/Europe at war v2.2" "/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug" "/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug" "/cygdrive/f/Personal projects/Europe at war v2.2/cmake-build-debug/CMakeFiles/Europe_at_war_v2_2.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Europe_at_war_v2_2.dir/depend
