# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.3.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/pratica-Pilha.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/pratica-Pilha.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/pratica-Pilha.dir/flags.make

CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.obj: CMakeFiles/pratica-Pilha.dir/flags.make
CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.obj: ../pratica-Pilha/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\pratica-Pilha.dir\pratica-Pilha\main.c.obj   -c C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\pratica-Pilha\main.c

CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\pratica-Pilha\main.c > CMakeFiles\pratica-Pilha.dir\pratica-Pilha\main.c.i

CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\pratica-Pilha\main.c -o CMakeFiles\pratica-Pilha.dir\pratica-Pilha\main.c.s

CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.obj: CMakeFiles/pratica-Pilha.dir/flags.make
CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.obj: ../pratica-Pilha/tad_lista.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.obj"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\pratica-Pilha.dir\pratica-Pilha\tad_lista.c.obj   -c C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\pratica-Pilha\tad_lista.c

CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.i"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\pratica-Pilha\tad_lista.c > CMakeFiles\pratica-Pilha.dir\pratica-Pilha\tad_lista.c.i

CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.s"
	C:\MinGW\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\pratica-Pilha\tad_lista.c -o CMakeFiles\pratica-Pilha.dir\pratica-Pilha\tad_lista.c.s

# Object files for target pratica-Pilha
pratica__Pilha_OBJECTS = \
"CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.obj" \
"CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.obj"

# External object files for target pratica-Pilha
pratica__Pilha_EXTERNAL_OBJECTS =

pratica-Pilha.exe: CMakeFiles/pratica-Pilha.dir/pratica-Pilha/main.c.obj
pratica-Pilha.exe: CMakeFiles/pratica-Pilha.dir/pratica-Pilha/tad_lista.c.obj
pratica-Pilha.exe: CMakeFiles/pratica-Pilha.dir/build.make
pratica-Pilha.exe: CMakeFiles/pratica-Pilha.dir/linklibs.rsp
pratica-Pilha.exe: CMakeFiles/pratica-Pilha.dir/objects1.rsp
pratica-Pilha.exe: CMakeFiles/pratica-Pilha.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable pratica-Pilha.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\pratica-Pilha.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/pratica-Pilha.dir/build: pratica-Pilha.exe

.PHONY : CMakeFiles/pratica-Pilha.dir/build

CMakeFiles/pratica-Pilha.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\pratica-Pilha.dir\cmake_clean.cmake
.PHONY : CMakeFiles/pratica-Pilha.dir/clean

CMakeFiles/pratica-Pilha.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1 C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1 C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug C:\Users\joaov\CLionProjects\FACUL-estruturaDeDados1\cmake-build-debug\CMakeFiles\pratica-Pilha.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/pratica-Pilha.dir/depend
