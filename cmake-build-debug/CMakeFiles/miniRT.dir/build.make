# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/alekseytvorogov/Desktop/fteeliy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/miniRT.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/miniRT.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/miniRT.dir/flags.make

CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.o: ../srcs/utils/error_exit.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/utils/error_exit.c

CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/utils/error_exit.c > CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.i

CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/utils/error_exit.c -o CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.s

CMakeFiles/miniRT.dir/srcs/main.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/main.c.o: ../srcs/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/miniRT.dir/srcs/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/main.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/main.c

CMakeFiles/miniRT.dir/srcs/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/main.c > CMakeFiles/miniRT.dir/srcs/main.c.i

CMakeFiles/miniRT.dir/srcs/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/main.c -o CMakeFiles/miniRT.dir/srcs/main.c.s

CMakeFiles/miniRT.dir/gnl/get_next_line.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/gnl/get_next_line.c.o: ../gnl/get_next_line.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/miniRT.dir/gnl/get_next_line.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/gnl/get_next_line.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/gnl/get_next_line.c

CMakeFiles/miniRT.dir/gnl/get_next_line.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/gnl/get_next_line.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/gnl/get_next_line.c > CMakeFiles/miniRT.dir/gnl/get_next_line.c.i

CMakeFiles/miniRT.dir/gnl/get_next_line.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/gnl/get_next_line.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/gnl/get_next_line.c -o CMakeFiles/miniRT.dir/gnl/get_next_line.c.s

CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.o: ../gnl/get_next_line_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/gnl/get_next_line_utils.c

CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/gnl/get_next_line_utils.c > CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.i

CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/gnl/get_next_line_utils.c -o CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.s

CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.o: ../srcs/parser/parse_scene.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_scene.c

CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_scene.c > CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.i

CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_scene.c -o CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.s

CMakeFiles/miniRT.dir/srcs/parser/parse.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/parse.c.o: ../srcs/parser/parse.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/miniRT.dir/srcs/parser/parse.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/parse.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse.c

CMakeFiles/miniRT.dir/srcs/parser/parse.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/parse.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse.c > CMakeFiles/miniRT.dir/srcs/parser/parse.c.i

CMakeFiles/miniRT.dir/srcs/parser/parse.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/parse.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse.c -o CMakeFiles/miniRT.dir/srcs/parser/parse.c.s

CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.o: ../srcs/parser/ft_split.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/ft_split.c

CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/ft_split.c > CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.i

CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/ft_split.c -o CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.s

CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.o: ../srcs/parser/parse_utils.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils.c

CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils.c > CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.i

CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils.c -o CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.s

CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.o: ../srcs/parser/parse_utils_2.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils_2.c

CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils_2.c > CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.i

CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils_2.c -o CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.s

CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.o: ../srcs/parser/color_hex.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/color_hex.c

CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/color_hex.c > CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.i

CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/color_hex.c -o CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.s

CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.o: ../srcs/utils/lists_operator.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/utils/lists_operator.c

CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/utils/lists_operator.c > CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.i

CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/utils/lists_operator.c -o CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.s

CMakeFiles/miniRT.dir/srcs/render/scene.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/scene.c.o: ../srcs/render/scene.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/miniRT.dir/srcs/render/scene.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/scene.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/scene.c

CMakeFiles/miniRT.dir/srcs/render/scene.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/scene.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/scene.c > CMakeFiles/miniRT.dir/srcs/render/scene.c.i

CMakeFiles/miniRT.dir/srcs/render/scene.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/scene.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/scene.c -o CMakeFiles/miniRT.dir/srcs/render/scene.c.s

CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.o: ../srcs/render/ambient_light.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building C object CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/ambient_light.c

CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/ambient_light.c > CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.i

CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/ambient_light.c -o CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.s

CMakeFiles/miniRT.dir/srcs/render/add_color.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/add_color.c.o: ../srcs/render/add_color.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building C object CMakeFiles/miniRT.dir/srcs/render/add_color.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/add_color.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/add_color.c

CMakeFiles/miniRT.dir/srcs/render/add_color.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/add_color.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/add_color.c > CMakeFiles/miniRT.dir/srcs/render/add_color.c.i

CMakeFiles/miniRT.dir/srcs/render/add_color.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/add_color.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/add_color.c -o CMakeFiles/miniRT.dir/srcs/render/add_color.c.s

CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.o: ../srcs/parser/parse_utils_3.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building C object CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils_3.c

CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils_3.c > CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.i

CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_utils_3.c -o CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.s

CMakeFiles/miniRT.dir/srcs/render/vector.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/vector.c.o: ../srcs/render/vector.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Building C object CMakeFiles/miniRT.dir/srcs/render/vector.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/vector.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/vector.c

CMakeFiles/miniRT.dir/srcs/render/vector.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/vector.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/vector.c > CMakeFiles/miniRT.dir/srcs/render/vector.c.i

CMakeFiles/miniRT.dir/srcs/render/vector.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/vector.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/vector.c -o CMakeFiles/miniRT.dir/srcs/render/vector.c.s

CMakeFiles/miniRT.dir/srcs/render/camera.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/camera.c.o: ../srcs/render/camera.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_17) "Building C object CMakeFiles/miniRT.dir/srcs/render/camera.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/camera.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/camera.c

CMakeFiles/miniRT.dir/srcs/render/camera.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/camera.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/camera.c > CMakeFiles/miniRT.dir/srcs/render/camera.c.i

CMakeFiles/miniRT.dir/srcs/render/camera.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/camera.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/camera.c -o CMakeFiles/miniRT.dir/srcs/render/camera.c.s

CMakeFiles/miniRT.dir/srcs/render/light.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/light.c.o: ../srcs/render/light.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_18) "Building C object CMakeFiles/miniRT.dir/srcs/render/light.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/light.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/light.c

CMakeFiles/miniRT.dir/srcs/render/light.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/light.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/light.c > CMakeFiles/miniRT.dir/srcs/render/light.c.i

CMakeFiles/miniRT.dir/srcs/render/light.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/light.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/light.c -o CMakeFiles/miniRT.dir/srcs/render/light.c.s

CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.o: ../srcs/parser/parse_figures.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_19) "Building C object CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_figures.c

CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_figures.c > CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.i

CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/parser/parse_figures.c -o CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.s

CMakeFiles/miniRT.dir/srcs/render/cylinder.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/cylinder.c.o: ../srcs/render/cylinder.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_20) "Building C object CMakeFiles/miniRT.dir/srcs/render/cylinder.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/cylinder.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/cylinder.c

CMakeFiles/miniRT.dir/srcs/render/cylinder.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/cylinder.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/cylinder.c > CMakeFiles/miniRT.dir/srcs/render/cylinder.c.i

CMakeFiles/miniRT.dir/srcs/render/cylinder.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/cylinder.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/cylinder.c -o CMakeFiles/miniRT.dir/srcs/render/cylinder.c.s

CMakeFiles/miniRT.dir/srcs/render/sphere.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/sphere.c.o: ../srcs/render/sphere.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_21) "Building C object CMakeFiles/miniRT.dir/srcs/render/sphere.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/sphere.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/sphere.c

CMakeFiles/miniRT.dir/srcs/render/sphere.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/sphere.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/sphere.c > CMakeFiles/miniRT.dir/srcs/render/sphere.c.i

CMakeFiles/miniRT.dir/srcs/render/sphere.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/sphere.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/sphere.c -o CMakeFiles/miniRT.dir/srcs/render/sphere.c.s

CMakeFiles/miniRT.dir/srcs/render/plane.c.o: CMakeFiles/miniRT.dir/flags.make
CMakeFiles/miniRT.dir/srcs/render/plane.c.o: ../srcs/render/plane.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_22) "Building C object CMakeFiles/miniRT.dir/srcs/render/plane.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/miniRT.dir/srcs/render/plane.c.o -c /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/plane.c

CMakeFiles/miniRT.dir/srcs/render/plane.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/miniRT.dir/srcs/render/plane.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/plane.c > CMakeFiles/miniRT.dir/srcs/render/plane.c.i

CMakeFiles/miniRT.dir/srcs/render/plane.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/miniRT.dir/srcs/render/plane.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/alekseytvorogov/Desktop/fteeliy/srcs/render/plane.c -o CMakeFiles/miniRT.dir/srcs/render/plane.c.s

# Object files for target miniRT
miniRT_OBJECTS = \
"CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.o" \
"CMakeFiles/miniRT.dir/srcs/main.c.o" \
"CMakeFiles/miniRT.dir/gnl/get_next_line.c.o" \
"CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/parse.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.o" \
"CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/scene.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/add_color.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/vector.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/camera.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/light.c.o" \
"CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/cylinder.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/sphere.c.o" \
"CMakeFiles/miniRT.dir/srcs/render/plane.c.o"

# External object files for target miniRT
miniRT_EXTERNAL_OBJECTS =

miniRT: CMakeFiles/miniRT.dir/srcs/utils/error_exit.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/main.c.o
miniRT: CMakeFiles/miniRT.dir/gnl/get_next_line.c.o
miniRT: CMakeFiles/miniRT.dir/gnl/get_next_line_utils.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/parse_scene.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/parse.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/ft_split.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/parse_utils.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/parse_utils_2.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/color_hex.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/utils/lists_operator.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/scene.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/ambient_light.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/add_color.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/parse_utils_3.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/vector.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/camera.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/light.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/parser/parse_figures.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/cylinder.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/sphere.c.o
miniRT: CMakeFiles/miniRT.dir/srcs/render/plane.c.o
miniRT: CMakeFiles/miniRT.dir/build.make
miniRT: CMakeFiles/miniRT.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_23) "Linking C executable miniRT"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/miniRT.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/miniRT.dir/build: miniRT
.PHONY : CMakeFiles/miniRT.dir/build

CMakeFiles/miniRT.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/miniRT.dir/cmake_clean.cmake
.PHONY : CMakeFiles/miniRT.dir/clean

CMakeFiles/miniRT.dir/depend:
	cd /Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/alekseytvorogov/Desktop/fteeliy /Users/alekseytvorogov/Desktop/fteeliy /Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug /Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug /Users/alekseytvorogov/Desktop/fteeliy/cmake-build-debug/CMakeFiles/miniRT.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/miniRT.dir/depend

