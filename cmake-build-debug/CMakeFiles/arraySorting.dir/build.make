# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.26

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2023.2.2\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Scooter\CLionProjects\SortingWithArrays

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/arraySorting.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/arraySorting.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/arraySorting.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/arraySorting.dir/flags.make

CMakeFiles/arraySorting.dir/main.cpp.obj: CMakeFiles/arraySorting.dir/flags.make
CMakeFiles/arraySorting.dir/main.cpp.obj: C:/Users/Scooter/CLionProjects/SortingWithArrays/main.cpp
CMakeFiles/arraySorting.dir/main.cpp.obj: CMakeFiles/arraySorting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/arraySorting.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arraySorting.dir/main.cpp.obj -MF CMakeFiles\arraySorting.dir\main.cpp.obj.d -o CMakeFiles\arraySorting.dir\main.cpp.obj -c C:\Users\Scooter\CLionProjects\SortingWithArrays\main.cpp

CMakeFiles/arraySorting.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraySorting.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Scooter\CLionProjects\SortingWithArrays\main.cpp > CMakeFiles\arraySorting.dir\main.cpp.i

CMakeFiles/arraySorting.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraySorting.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Scooter\CLionProjects\SortingWithArrays\main.cpp -o CMakeFiles\arraySorting.dir\main.cpp.s

CMakeFiles/arraySorting.dir/arraySorting.cpp.obj: CMakeFiles/arraySorting.dir/flags.make
CMakeFiles/arraySorting.dir/arraySorting.cpp.obj: C:/Users/Scooter/CLionProjects/SortingWithArrays/arraySorting.cpp
CMakeFiles/arraySorting.dir/arraySorting.cpp.obj: CMakeFiles/arraySorting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/arraySorting.dir/arraySorting.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arraySorting.dir/arraySorting.cpp.obj -MF CMakeFiles\arraySorting.dir\arraySorting.cpp.obj.d -o CMakeFiles\arraySorting.dir\arraySorting.cpp.obj -c C:\Users\Scooter\CLionProjects\SortingWithArrays\arraySorting.cpp

CMakeFiles/arraySorting.dir/arraySorting.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraySorting.dir/arraySorting.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Scooter\CLionProjects\SortingWithArrays\arraySorting.cpp > CMakeFiles\arraySorting.dir\arraySorting.cpp.i

CMakeFiles/arraySorting.dir/arraySorting.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraySorting.dir/arraySorting.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Scooter\CLionProjects\SortingWithArrays\arraySorting.cpp -o CMakeFiles\arraySorting.dir\arraySorting.cpp.s

CMakeFiles/arraySorting.dir/getString.cpp.obj: CMakeFiles/arraySorting.dir/flags.make
CMakeFiles/arraySorting.dir/getString.cpp.obj: C:/Users/Scooter/CLionProjects/SortingWithArrays/getString.cpp
CMakeFiles/arraySorting.dir/getString.cpp.obj: CMakeFiles/arraySorting.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/arraySorting.dir/getString.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/arraySorting.dir/getString.cpp.obj -MF CMakeFiles\arraySorting.dir\getString.cpp.obj.d -o CMakeFiles\arraySorting.dir\getString.cpp.obj -c C:\Users\Scooter\CLionProjects\SortingWithArrays\getString.cpp

CMakeFiles/arraySorting.dir/getString.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/arraySorting.dir/getString.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Scooter\CLionProjects\SortingWithArrays\getString.cpp > CMakeFiles\arraySorting.dir\getString.cpp.i

CMakeFiles/arraySorting.dir/getString.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/arraySorting.dir/getString.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Scooter\CLionProjects\SortingWithArrays\getString.cpp -o CMakeFiles\arraySorting.dir\getString.cpp.s

# Object files for target arraySorting
arraySorting_OBJECTS = \
"CMakeFiles/arraySorting.dir/main.cpp.obj" \
"CMakeFiles/arraySorting.dir/arraySorting.cpp.obj" \
"CMakeFiles/arraySorting.dir/getString.cpp.obj"

# External object files for target arraySorting
arraySorting_EXTERNAL_OBJECTS =

arraySorting.exe: CMakeFiles/arraySorting.dir/main.cpp.obj
arraySorting.exe: CMakeFiles/arraySorting.dir/arraySorting.cpp.obj
arraySorting.exe: CMakeFiles/arraySorting.dir/getString.cpp.obj
arraySorting.exe: CMakeFiles/arraySorting.dir/build.make
arraySorting.exe: CMakeFiles/arraySorting.dir/linkLibs.rsp
arraySorting.exe: CMakeFiles/arraySorting.dir/objects1.rsp
arraySorting.exe: CMakeFiles/arraySorting.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable arraySorting.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\arraySorting.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/arraySorting.dir/build: arraySorting.exe
.PHONY : CMakeFiles/arraySorting.dir/build

CMakeFiles/arraySorting.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\arraySorting.dir\cmake_clean.cmake
.PHONY : CMakeFiles/arraySorting.dir/clean

CMakeFiles/arraySorting.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Scooter\CLionProjects\SortingWithArrays C:\Users\Scooter\CLionProjects\SortingWithArrays C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug C:\Users\Scooter\CLionProjects\SortingWithArrays\cmake-build-debug\CMakeFiles\arraySorting.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/arraySorting.dir/depend

