# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /cygdrive/c/Users/Maks/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Maks/.CLion2019.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/cygdrive/d/C++/laboratory works/Vector"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Vector.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Vector.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vector.dir/flags.make

CMakeFiles/Vector.dir/main.cpp.o: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Vector.dir/main.cpp.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/main.cpp.o -c "/cygdrive/d/C++/laboratory works/Vector/main.cpp"

CMakeFiles/Vector.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/main.cpp.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/C++/laboratory works/Vector/main.cpp" > CMakeFiles/Vector.dir/main.cpp.i

CMakeFiles/Vector.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/main.cpp.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/C++/laboratory works/Vector/main.cpp" -o CMakeFiles/Vector.dir/main.cpp.s

CMakeFiles/Vector.dir/Vector2D.cpp.o: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/Vector2D.cpp.o: ../Vector2D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Vector.dir/Vector2D.cpp.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/Vector2D.cpp.o -c "/cygdrive/d/C++/laboratory works/Vector/Vector2D.cpp"

CMakeFiles/Vector.dir/Vector2D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/Vector2D.cpp.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/C++/laboratory works/Vector/Vector2D.cpp" > CMakeFiles/Vector.dir/Vector2D.cpp.i

CMakeFiles/Vector.dir/Vector2D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/Vector2D.cpp.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/C++/laboratory works/Vector/Vector2D.cpp" -o CMakeFiles/Vector.dir/Vector2D.cpp.s

CMakeFiles/Vector.dir/Vector3D.cpp.o: CMakeFiles/Vector.dir/flags.make
CMakeFiles/Vector.dir/Vector3D.cpp.o: ../Vector3D.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Vector.dir/Vector3D.cpp.o"
	C:/cygwin64/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vector.dir/Vector3D.cpp.o -c "/cygdrive/d/C++/laboratory works/Vector/Vector3D.cpp"

CMakeFiles/Vector.dir/Vector3D.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vector.dir/Vector3D.cpp.i"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/cygdrive/d/C++/laboratory works/Vector/Vector3D.cpp" > CMakeFiles/Vector.dir/Vector3D.cpp.i

CMakeFiles/Vector.dir/Vector3D.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vector.dir/Vector3D.cpp.s"
	C:/cygwin64/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/cygdrive/d/C++/laboratory works/Vector/Vector3D.cpp" -o CMakeFiles/Vector.dir/Vector3D.cpp.s

# Object files for target Vector
Vector_OBJECTS = \
"CMakeFiles/Vector.dir/main.cpp.o" \
"CMakeFiles/Vector.dir/Vector2D.cpp.o" \
"CMakeFiles/Vector.dir/Vector3D.cpp.o"

# External object files for target Vector
Vector_EXTERNAL_OBJECTS =

Vector.exe: CMakeFiles/Vector.dir/main.cpp.o
Vector.exe: CMakeFiles/Vector.dir/Vector2D.cpp.o
Vector.exe: CMakeFiles/Vector.dir/Vector3D.cpp.o
Vector.exe: CMakeFiles/Vector.dir/build.make
Vector.exe: CMakeFiles/Vector.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Vector.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vector.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vector.dir/build: Vector.exe

.PHONY : CMakeFiles/Vector.dir/build

CMakeFiles/Vector.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Vector.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Vector.dir/clean

CMakeFiles/Vector.dir/depend:
	cd "/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/cygdrive/d/C++/laboratory works/Vector" "/cygdrive/d/C++/laboratory works/Vector" "/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug" "/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug" "/cygdrive/d/C++/laboratory works/Vector/cmake-build-debug/CMakeFiles/Vector.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Vector.dir/depend

