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
CMAKE_SOURCE_DIR = "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/build"

# Include any dependencies generated for this target.
include CMakeFiles/COLLATZ.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/COLLATZ.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/COLLATZ.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/COLLATZ.dir/flags.make

CMakeFiles/COLLATZ.dir/codegen:
.PHONY : CMakeFiles/COLLATZ.dir/codegen

CMakeFiles/COLLATZ.dir/main.cpp.obj: CMakeFiles/COLLATZ.dir/flags.make
CMakeFiles/COLLATZ.dir/main.cpp.obj: D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/main.cpp
CMakeFiles/COLLATZ.dir/main.cpp.obj: CMakeFiles/COLLATZ.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/COLLATZ.dir/main.cpp.obj"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/COLLATZ.dir/main.cpp.obj -MF CMakeFiles/COLLATZ.dir/main.cpp.obj.d -o CMakeFiles/COLLATZ.dir/main.cpp.obj -c "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/main.cpp"

CMakeFiles/COLLATZ.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/COLLATZ.dir/main.cpp.i"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/main.cpp" > CMakeFiles/COLLATZ.dir/main.cpp.i

CMakeFiles/COLLATZ.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/COLLATZ.dir/main.cpp.s"
	D:/Programlar/MSYS/ucrt64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/main.cpp" -o CMakeFiles/COLLATZ.dir/main.cpp.s

# Object files for target COLLATZ
COLLATZ_OBJECTS = \
"CMakeFiles/COLLATZ.dir/main.cpp.obj"

# External object files for target COLLATZ
COLLATZ_EXTERNAL_OBJECTS =

D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe: CMakeFiles/COLLATZ.dir/main.cpp.obj
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe: CMakeFiles/COLLATZ.dir/build.make
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe: CMakeFiles/COLLATZ.dir/linkLibs.rsp
D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe: CMakeFiles/COLLATZ.dir/objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable \"D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe\""
	D:/Programlar/MSYS/ucrt64/bin/cmake.exe -E rm -f CMakeFiles/COLLATZ.dir/objects.a
	D:/Programlar/MSYS/ucrt64/bin/ar.exe qc CMakeFiles/COLLATZ.dir/objects.a @CMakeFiles/COLLATZ.dir/objects1.rsp
	D:/Programlar/MSYS/ucrt64/bin/c++.exe -Wl,--whole-archive CMakeFiles/COLLATZ.dir/objects.a -Wl,--no-whole-archive -o "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe" -Wl,--out-implib,libCOLLATZ.dll.a -Wl,--major-image-version,0,--minor-image-version,0 @CMakeFiles/COLLATZ.dir/linkLibs.rsp

# Rule to build all files generated by this target.
CMakeFiles/COLLATZ.dir/build: D:/altnskuur/TOBB/ELE\ 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/COLLATZ.exe
.PHONY : CMakeFiles/COLLATZ.dir/build

CMakeFiles/COLLATZ.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/COLLATZ.dir/cmake_clean.cmake
.PHONY : CMakeFiles/COLLATZ.dir/clean

CMakeFiles/COLLATZ.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/build" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/build" "D:/altnskuur/TOBB/ELE 142/repos/Lecture_2_ProgAkisi_Fonksiyonlar/CollatzHypothesis/build/CMakeFiles/COLLATZ.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/COLLATZ.dir/depend

