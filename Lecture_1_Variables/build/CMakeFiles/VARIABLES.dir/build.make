# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

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
CMAKE_COMMAND = D:/Programlar/MSYS/ucrt64/bin/cmake.exe

# The command to remove a file.
RM = D:/Programlar/MSYS/ucrt64/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/build"

# Include any dependencies generated for this target.
include CMakeFiles/VARIABLES.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/VARIABLES.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/VARIABLES.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/VARIABLES.dir/flags.make

CMakeFiles/VARIABLES.dir/codegen:
.PHONY : CMakeFiles/VARIABLES.dir/codegen

CMakeFiles/VARIABLES.dir/main.cpp.obj: CMakeFiles/VARIABLES.dir/flags.make
CMakeFiles/VARIABLES.dir/main.cpp.obj: CMakeFiles/VARIABLES.dir/includes_CXX.rsp
CMakeFiles/VARIABLES.dir/main.cpp.obj: D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_1_Variables/main.cpp
CMakeFiles/VARIABLES.dir/main.cpp.obj: CMakeFiles/VARIABLES.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/VARIABLES.dir/main.cpp.obj"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/VARIABLES.dir/main.cpp.obj -MF CMakeFiles/VARIABLES.dir/main.cpp.obj.d -o CMakeFiles/VARIABLES.dir/main.cpp.obj -c "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/main.cpp"

CMakeFiles/VARIABLES.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/VARIABLES.dir/main.cpp.i"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/main.cpp" > CMakeFiles/VARIABLES.dir/main.cpp.i

CMakeFiles/VARIABLES.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/VARIABLES.dir/main.cpp.s"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/main.cpp" -o CMakeFiles/VARIABLES.dir/main.cpp.s

# Object files for target VARIABLES
VARIABLES_OBJECTS = \
"CMakeFiles/VARIABLES.dir/main.cpp.obj"

# External object files for target VARIABLES
VARIABLES_EXTERNAL_OBJECTS =

D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_1_Variables/variables.exe: CMakeFiles/VARIABLES.dir/main.cpp.obj
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_1_Variables/variables.exe: CMakeFiles/VARIABLES.dir/build.make
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_1_Variables/variables.exe: CMakeFiles/VARIABLES.dir/linkLibs.rsp
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_1_Variables/variables.exe: CMakeFiles/VARIABLES.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/variables.exe\""
	D:/Programlar/MSYS/ucrt64/bin/cmake.exe -E rm -f CMakeFiles/VARIABLES.dir/objects.a
	D:/Programlar/MSYS/ucrt64/bin/ar.exe qc CMakeFiles/VARIABLES.dir/objects.a @CMakeFiles/VARIABLES.dir/objects1.rsp
	D:/Programlar/MSYS/ucrt64/bin/c++.exe -Wl,--whole-archive CMakeFiles/VARIABLES.dir/objects.a -Wl,--no-whole-archive -o "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/variables.exe" -Wl,--out-implib,libvariables.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/VARIABLES.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/VARIABLES.dir/build: D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_1_Variables/variables.exe
.PHONY : CMakeFiles/VARIABLES.dir/build

CMakeFiles/VARIABLES.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/VARIABLES.dir/cmake_clean.cmake
.PHONY : CMakeFiles/VARIABLES.dir/clean

CMakeFiles/VARIABLES.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/build" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/build" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_1_Variables/build/CMakeFiles/VARIABLES.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/VARIABLES.dir/depend

