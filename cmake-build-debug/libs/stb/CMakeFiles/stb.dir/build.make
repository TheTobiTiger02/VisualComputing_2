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
include libs/stb/CMakeFiles/stb.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include libs/stb/CMakeFiles/stb.dir/compiler_depend.make

# Include the progress variables for this target.
include libs/stb/CMakeFiles/stb.dir/progress.make

# Include the compile flags for this target's objects.
include libs/stb/CMakeFiles/stb.dir/flags.make

libs/stb/CMakeFiles/stb.dir/stb_image.c.obj: libs/stb/CMakeFiles/stb.dir/flags.make
libs/stb/CMakeFiles/stb.dir/stb_image.c.obj: C:/Users/Tobias\ Heyn/CLionProjects/VisualComputing_2/libs/stb/stb_image.c
libs/stb/CMakeFiles/stb.dir/stb_image.c.obj: libs/stb/CMakeFiles/stb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object libs/stb/CMakeFiles/stb.dir/stb_image.c.obj"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libs/stb/CMakeFiles/stb.dir/stb_image.c.obj -MF CMakeFiles\stb.dir\stb_image.c.obj.d -o CMakeFiles\stb.dir\stb_image.c.obj -c "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb\stb_image.c"

libs/stb/CMakeFiles/stb.dir/stb_image.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/stb.dir/stb_image.c.i"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb\stb_image.c" > CMakeFiles\stb.dir\stb_image.c.i

libs/stb/CMakeFiles/stb.dir/stb_image.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/stb.dir/stb_image.c.s"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb\stb_image.c" -o CMakeFiles\stb.dir\stb_image.c.s

libs/stb/CMakeFiles/stb.dir/stb_image_write.c.obj: libs/stb/CMakeFiles/stb.dir/flags.make
libs/stb/CMakeFiles/stb.dir/stb_image_write.c.obj: C:/Users/Tobias\ Heyn/CLionProjects/VisualComputing_2/libs/stb/stb_image_write.c
libs/stb/CMakeFiles/stb.dir/stb_image_write.c.obj: libs/stb/CMakeFiles/stb.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir="C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object libs/stb/CMakeFiles/stb.dir/stb_image_write.c.obj"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT libs/stb/CMakeFiles/stb.dir/stb_image_write.c.obj -MF CMakeFiles\stb.dir\stb_image_write.c.obj.d -o CMakeFiles\stb.dir\stb_image_write.c.obj -c "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb\stb_image_write.c"

libs/stb/CMakeFiles/stb.dir/stb_image_write.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing C source to CMakeFiles/stb.dir/stb_image_write.c.i"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb\stb_image_write.c" > CMakeFiles\stb.dir\stb_image_write.c.i

libs/stb/CMakeFiles/stb.dir/stb_image_write.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling C source to assembly CMakeFiles/stb.dir/stb_image_write.c.s"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && C:\Users\TOBIAS~1\AppData\Local\Programs\CLion\bin\mingw\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb\stb_image_write.c" -o CMakeFiles\stb.dir\stb_image_write.c.s

# Object files for target stb
stb_OBJECTS = \
"CMakeFiles/stb.dir/stb_image.c.obj" \
"CMakeFiles/stb.dir/stb_image_write.c.obj"

# External object files for target stb
stb_EXTERNAL_OBJECTS =

libs/stb/libstb.a: libs/stb/CMakeFiles/stb.dir/stb_image.c.obj
libs/stb/libstb.a: libs/stb/CMakeFiles/stb.dir/stb_image_write.c.obj
libs/stb/libstb.a: libs/stb/CMakeFiles/stb.dir/build.make
libs/stb/libstb.a: libs/stb/CMakeFiles/stb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir="C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C static library libstb.a"
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && $(CMAKE_COMMAND) -P CMakeFiles\stb.dir\cmake_clean_target.cmake
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\stb.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libs/stb/CMakeFiles/stb.dir/build: libs/stb/libstb.a
.PHONY : libs/stb/CMakeFiles/stb.dir/build

libs/stb/CMakeFiles/stb.dir/clean:
	cd /d C:\Users\TOBIAS~1\CLIONP~1\VISUAL~1\CMAKE-~1\libs\stb && $(CMAKE_COMMAND) -P CMakeFiles\stb.dir\cmake_clean.cmake
.PHONY : libs/stb/CMakeFiles/stb.dir/clean

libs/stb/CMakeFiles/stb.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\libs\stb" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\libs\stb" "C:\Users\Tobias Heyn\CLionProjects\VisualComputing_2\cmake-build-debug\libs\stb\CMakeFiles\stb.dir\DependInfo.cmake" "--color=$(COLOR)"
.PHONY : libs/stb/CMakeFiles/stb.dir/depend

