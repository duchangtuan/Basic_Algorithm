# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.2

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

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/fengxi/Basic_Algorithm/cpp_exam/binarytree

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build

# Include any dependencies generated for this target.
include CMakeFiles/test_binaryTree.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_binaryTree.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_binaryTree.dir/flags.make

CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o: CMakeFiles/test_binaryTree.dir/flags.make
CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o: ../src/binarytree.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o -c /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/src/binarytree.cpp

CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/src/binarytree.cpp > CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.i

CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/src/binarytree.cpp -o CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.s

CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.requires:
.PHONY : CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.requires

CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.provides: CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_binaryTree.dir/build.make CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.provides.build
.PHONY : CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.provides

CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.provides.build: CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o

CMakeFiles/test_binaryTree.dir/src/main.cpp.o: CMakeFiles/test_binaryTree.dir/flags.make
CMakeFiles/test_binaryTree.dir/src/main.cpp.o: ../src/main.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/test_binaryTree.dir/src/main.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/test_binaryTree.dir/src/main.cpp.o -c /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/src/main.cpp

CMakeFiles/test_binaryTree.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_binaryTree.dir/src/main.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/src/main.cpp > CMakeFiles/test_binaryTree.dir/src/main.cpp.i

CMakeFiles/test_binaryTree.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_binaryTree.dir/src/main.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/src/main.cpp -o CMakeFiles/test_binaryTree.dir/src/main.cpp.s

CMakeFiles/test_binaryTree.dir/src/main.cpp.o.requires:
.PHONY : CMakeFiles/test_binaryTree.dir/src/main.cpp.o.requires

CMakeFiles/test_binaryTree.dir/src/main.cpp.o.provides: CMakeFiles/test_binaryTree.dir/src/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/test_binaryTree.dir/build.make CMakeFiles/test_binaryTree.dir/src/main.cpp.o.provides.build
.PHONY : CMakeFiles/test_binaryTree.dir/src/main.cpp.o.provides

CMakeFiles/test_binaryTree.dir/src/main.cpp.o.provides.build: CMakeFiles/test_binaryTree.dir/src/main.cpp.o

# Object files for target test_binaryTree
test_binaryTree_OBJECTS = \
"CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o" \
"CMakeFiles/test_binaryTree.dir/src/main.cpp.o"

# External object files for target test_binaryTree
test_binaryTree_EXTERNAL_OBJECTS =

test_binaryTree: CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o
test_binaryTree: CMakeFiles/test_binaryTree.dir/src/main.cpp.o
test_binaryTree: CMakeFiles/test_binaryTree.dir/build.make
test_binaryTree: CMakeFiles/test_binaryTree.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable test_binaryTree"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_binaryTree.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_binaryTree.dir/build: test_binaryTree
.PHONY : CMakeFiles/test_binaryTree.dir/build

CMakeFiles/test_binaryTree.dir/requires: CMakeFiles/test_binaryTree.dir/src/binarytree.cpp.o.requires
CMakeFiles/test_binaryTree.dir/requires: CMakeFiles/test_binaryTree.dir/src/main.cpp.o.requires
.PHONY : CMakeFiles/test_binaryTree.dir/requires

CMakeFiles/test_binaryTree.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_binaryTree.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_binaryTree.dir/clean

CMakeFiles/test_binaryTree.dir/depend:
	cd /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/fengxi/Basic_Algorithm/cpp_exam/binarytree /home/fengxi/Basic_Algorithm/cpp_exam/binarytree /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build /home/fengxi/Basic_Algorithm/cpp_exam/binarytree/build/CMakeFiles/test_binaryTree.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_binaryTree.dir/depend

