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
CMAKE_SOURCE_DIR = "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/build"

# Include any dependencies generated for this target.
include CMakeFiles/MEMORY.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/MEMORY.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/MEMORY.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MEMORY.dir/flags.make

CMakeFiles/MEMORY.dir/codegen:
.PHONY : CMakeFiles/MEMORY.dir/codegen

CMakeFiles/MEMORY.dir/main.cpp.obj: CMakeFiles/MEMORY.dir/flags.make
CMakeFiles/MEMORY.dir/main.cpp.obj: CMakeFiles/MEMORY.dir/includes_CXX.rsp
CMakeFiles/MEMORY.dir/main.cpp.obj: D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_3_Pointers_DynamicMem/main.cpp
CMakeFiles/MEMORY.dir/main.cpp.obj: CMakeFiles/MEMORY.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MEMORY.dir/main.cpp.obj"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/MEMORY.dir/main.cpp.obj -MF CMakeFiles/MEMORY.dir/main.cpp.obj.d -o CMakeFiles/MEMORY.dir/main.cpp.obj -c "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/main.cpp"

CMakeFiles/MEMORY.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/MEMORY.dir/main.cpp.i"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/main.cpp" > CMakeFiles/MEMORY.dir/main.cpp.i

CMakeFiles/MEMORY.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/MEMORY.dir/main.cpp.s"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/main.cpp" -o CMakeFiles/MEMORY.dir/main.cpp.s

# Object files for target MEMORY
MEMORY_OBJECTS = \
"CMakeFiles/MEMORY.dir/main.cpp.obj"

# External object files for target MEMORY
MEMORY_EXTERNAL_OBJECTS =

D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe: CMakeFiles/MEMORY.dir/main.cpp.obj
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe: CMakeFiles/MEMORY.dir/build.make
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe: CMakeFiles/MEMORY.dir/linkLibs.rsp
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe: CMakeFiles/MEMORY.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe\""
	D:/Programlar/MSYS/ucrt64/bin/cmake.exe -E rm -f CMakeFiles/MEMORY.dir/objects.a
	D:/Programlar/MSYS/ucrt64/bin/ar.exe qc CMakeFiles/MEMORY.dir/objects.a @CMakeFiles/MEMORY.dir/objects1.rsp
	D:/Programlar/MSYS/ucrt64/bin/c++.exe -Wl,--whole-archive CMakeFiles/MEMORY.dir/objects.a -Wl,--no-whole-archive -o "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe" -Wl,--out-implib,libmemory.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/MEMORY.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/MEMORY.dir/build: D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_3_Pointers_DynamicMem/memory.exe
.PHONY : CMakeFiles/MEMORY.dir/build

CMakeFiles/MEMORY.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MEMORY.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MEMORY.dir/clean

CMakeFiles/MEMORY.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/build" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/build" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_3_Pointers_DynamicMem/build/CMakeFiles/MEMORY.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/MEMORY.dir/depend

