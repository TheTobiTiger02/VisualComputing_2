# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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
CMAKE_COMMAND = "C:\Users\Tobias Heyn\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Users\Tobias Heyn\AppData\Local\Programs\CLion\bin\cmake\win\x64\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug"

# Include any dependencies generated for this target.
include libs/glm-master/glm/CMakeFiles/glm_dummy.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/glm-master/glm/CMakeFiles/glm_dummy.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/glm-master/glm/CMakeFiles/glm_dummy.dir/progress.make

# Include the compile flags for this target's objects.
include libs/glm-master/glm/CMakeFiles/glm_dummy.dir/flags.make

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/flags.make
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/includes_CXX.rsp
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj: C:/Users/Tobias\ Heyn/CLionProjects/VisualComputing_2/libs/glm-master/glm/detail/dummy.cpp
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj -MF CMakeFiles\glm_dummy.dir\detail\dummy.cpp.obj.d -o CMakeFiles\glm_dummy.dir\detail\dummy.cpp.obj -c "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm\detail\dummy.cpp"

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/glm_dummy.dir/detail/dummy.cpp.i"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm\detail\dummy.cpp" > CMakeFiles\glm_dummy.dir\detail\dummy.cpp.i

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/glm_dummy.dir/detail/dummy.cpp.s"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm\detail\dummy.cpp" -o CMakeFiles\glm_dummy.dir\detail\dummy.cpp.s

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/flags.make
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/includes_CXX.rsp
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj: C:/Users/Tobias\ Heyn/CLionProjects/VisualComputing_2/libs/glm-master/glm/detail/glm.cpp
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj -MF CMakeFiles\glm_dummy.dir\detail\glm.cpp.obj.d -o CMakeFiles\glm_dummy.dir\detail\glm.cpp.obj -c "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm\detail\glm.cpp"

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/glm_dummy.dir/detail/glm.cpp.i"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm\detail\glm.cpp" > CMakeFiles\glm_dummy.dir\detail\glm.cpp.i

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/glm_dummy.dir/detail/glm.cpp.s"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm\detail\glm.cpp" -o CMakeFiles\glm_dummy.dir\detail\glm.cpp.s

# Object files for target glm_dummy
glm_dummy_OBJECTS = \
"CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj" \
"CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj"

# External object files for target glm_dummy
glm_dummy_EXTERNAL_OBJECTS =

libs/glm-master/glm/glm_dummy.exe: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/dummy.cpp.obj
libs/glm-master/glm/glm_dummy.exe: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/detail/glm.cpp.obj
libs/glm-master/glm/glm_dummy.exe: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/build.make
libs/glm-master/glm/glm_dummy.exe: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/linkLibs.rsp
libs/glm-master/glm/glm_dummy.exe: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/objects1.rsp
libs/glm-master/glm/glm_dummy.exe: libs/glm-master/glm/CMakeFiles/glm_dummy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable glm_dummy.exe"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\glm_dummy.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/glm-master/glm/CMakeFiles/glm_dummy.dir/build: libs/glm-master/glm/glm_dummy.exe
.PHONY : libs/glm-master/glm/CMakeFiles/glm_dummy.dir/build

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/clean:
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\GLM-MA~1\glm && $(CMAKE_COMMAND) -P CMakeFiles\glm_dummy.dir\cmake_clean.cmake
.PHONY : libs/glm-master/glm/CMakeFiles/glm_dummy.dir/clean

libs/glm-master/glm/CMakeFiles/glm_dummy.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\glm-master\glm" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\libs\glm-master\glm" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\libs\glm-master\glm\CMakeFiles\glm_dummy.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : libs/glm-master/glm/CMakeFiles/glm_dummy.dir/depend

