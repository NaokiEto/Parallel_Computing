# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lakers/Downloads/VTK

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lakers/Downloads/VTK

# Include any dependencies generated for this target.
include Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/depend.make

# Include the progress variables for this target.
include Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/progress.make

# Include the compile flags for this target's objects.
include Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/flags.make

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/flags.make
Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o: Parallel/Testing/Cxx/SocketClient.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lakers/Downloads/VTK/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && /usr/bin/mpiCC   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SocketClient.dir/SocketClient.cxx.o -c /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/SocketClient.cxx

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SocketClient.dir/SocketClient.cxx.i"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && /usr/bin/mpiCC  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/SocketClient.cxx > CMakeFiles/SocketClient.dir/SocketClient.cxx.i

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SocketClient.dir/SocketClient.cxx.s"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && /usr/bin/mpiCC  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/SocketClient.cxx -o CMakeFiles/SocketClient.dir/SocketClient.cxx.s

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.requires:
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.requires

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.provides: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.requires
	$(MAKE) -f Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/build.make Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.provides.build
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.provides

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.provides.build: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/flags.make
Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o: Parallel/Testing/Cxx/ExerciseMultiProcessController.cxx
	$(CMAKE_COMMAND) -E cmake_progress_report /home/lakers/Downloads/VTK/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && /usr/bin/mpiCC   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o -c /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/ExerciseMultiProcessController.cxx

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.i"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && /usr/bin/mpiCC  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/ExerciseMultiProcessController.cxx > CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.i

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.s"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && /usr/bin/mpiCC  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/ExerciseMultiProcessController.cxx -o CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.s

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.requires:
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.requires

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.provides: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.requires
	$(MAKE) -f Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/build.make Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.provides.build
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.provides

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.provides.build: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o

# Object files for target SocketClient
SocketClient_OBJECTS = \
"CMakeFiles/SocketClient.dir/SocketClient.cxx.o" \
"CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o"

# External object files for target SocketClient
SocketClient_EXTERNAL_OBJECTS =

bin/SocketClient: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o
bin/SocketClient: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o
bin/SocketClient: bin/libvtkParallel.so.5.8.0
bin/SocketClient: bin/libvtkRendering.so.5.8.0
bin/SocketClient: bin/libvtkGraphics.so.5.8.0
bin/SocketClient: bin/libvtkImaging.so.5.8.0
bin/SocketClient: bin/libvtkIO.so.5.8.0
bin/SocketClient: bin/libvtkFiltering.so.5.8.0
bin/SocketClient: bin/libvtkCommon.so.5.8.0
bin/SocketClient: bin/libvtksys.so.5.8.0
bin/SocketClient: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/build.make
bin/SocketClient: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../bin/SocketClient"
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/SocketClient.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/build: bin/SocketClient
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/build

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/requires: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/SocketClient.cxx.o.requires
Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/requires: Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/ExerciseMultiProcessController.cxx.o.requires
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/requires

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/clean:
	cd /home/lakers/Downloads/VTK/Parallel/Testing/Cxx && $(CMAKE_COMMAND) -P CMakeFiles/SocketClient.dir/cmake_clean.cmake
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/clean

Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/depend:
	cd /home/lakers/Downloads/VTK && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lakers/Downloads/VTK /home/lakers/Downloads/VTK/Parallel/Testing/Cxx /home/lakers/Downloads/VTK /home/lakers/Downloads/VTK/Parallel/Testing/Cxx /home/lakers/Downloads/VTK/Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Parallel/Testing/Cxx/CMakeFiles/SocketClient.dir/depend

