# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/lliir/Desktop/prac_stuManage

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/lliir/Desktop/prac_stuManage

# Include any dependencies generated for this target.
include lib/CMakeFiles/students.dir/depend.make

# Include the progress variables for this target.
include lib/CMakeFiles/students.dir/progress.make

# Include the compile flags for this target's objects.
include lib/CMakeFiles/students.dir/flags.make

lib/CMakeFiles/students.dir/IO.cpp.o: lib/CMakeFiles/students.dir/flags.make
lib/CMakeFiles/students.dir/IO.cpp.o: lib/IO.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lliir/Desktop/prac_stuManage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object lib/CMakeFiles/students.dir/IO.cpp.o"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students.dir/IO.cpp.o -c /home/lliir/Desktop/prac_stuManage/lib/IO.cpp

lib/CMakeFiles/students.dir/IO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students.dir/IO.cpp.i"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lliir/Desktop/prac_stuManage/lib/IO.cpp > CMakeFiles/students.dir/IO.cpp.i

lib/CMakeFiles/students.dir/IO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students.dir/IO.cpp.s"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lliir/Desktop/prac_stuManage/lib/IO.cpp -o CMakeFiles/students.dir/IO.cpp.s

lib/CMakeFiles/students.dir/Person.cpp.o: lib/CMakeFiles/students.dir/flags.make
lib/CMakeFiles/students.dir/Person.cpp.o: lib/Person.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lliir/Desktop/prac_stuManage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object lib/CMakeFiles/students.dir/Person.cpp.o"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students.dir/Person.cpp.o -c /home/lliir/Desktop/prac_stuManage/lib/Person.cpp

lib/CMakeFiles/students.dir/Person.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students.dir/Person.cpp.i"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lliir/Desktop/prac_stuManage/lib/Person.cpp > CMakeFiles/students.dir/Person.cpp.i

lib/CMakeFiles/students.dir/Person.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students.dir/Person.cpp.s"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lliir/Desktop/prac_stuManage/lib/Person.cpp -o CMakeFiles/students.dir/Person.cpp.s

lib/CMakeFiles/students.dir/Students.cpp.o: lib/CMakeFiles/students.dir/flags.make
lib/CMakeFiles/students.dir/Students.cpp.o: lib/Students.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lliir/Desktop/prac_stuManage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object lib/CMakeFiles/students.dir/Students.cpp.o"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students.dir/Students.cpp.o -c /home/lliir/Desktop/prac_stuManage/lib/Students.cpp

lib/CMakeFiles/students.dir/Students.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students.dir/Students.cpp.i"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lliir/Desktop/prac_stuManage/lib/Students.cpp > CMakeFiles/students.dir/Students.cpp.i

lib/CMakeFiles/students.dir/Students.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students.dir/Students.cpp.s"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lliir/Desktop/prac_stuManage/lib/Students.cpp -o CMakeFiles/students.dir/Students.cpp.s

lib/CMakeFiles/students.dir/errorModel.cpp.o: lib/CMakeFiles/students.dir/flags.make
lib/CMakeFiles/students.dir/errorModel.cpp.o: lib/errorModel.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/lliir/Desktop/prac_stuManage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object lib/CMakeFiles/students.dir/errorModel.cpp.o"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/students.dir/errorModel.cpp.o -c /home/lliir/Desktop/prac_stuManage/lib/errorModel.cpp

lib/CMakeFiles/students.dir/errorModel.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/students.dir/errorModel.cpp.i"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/lliir/Desktop/prac_stuManage/lib/errorModel.cpp > CMakeFiles/students.dir/errorModel.cpp.i

lib/CMakeFiles/students.dir/errorModel.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/students.dir/errorModel.cpp.s"
	cd /home/lliir/Desktop/prac_stuManage/lib && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/lliir/Desktop/prac_stuManage/lib/errorModel.cpp -o CMakeFiles/students.dir/errorModel.cpp.s

# Object files for target students
students_OBJECTS = \
"CMakeFiles/students.dir/IO.cpp.o" \
"CMakeFiles/students.dir/Person.cpp.o" \
"CMakeFiles/students.dir/Students.cpp.o" \
"CMakeFiles/students.dir/errorModel.cpp.o"

# External object files for target students
students_EXTERNAL_OBJECTS =

lib/libstudents.a: lib/CMakeFiles/students.dir/IO.cpp.o
lib/libstudents.a: lib/CMakeFiles/students.dir/Person.cpp.o
lib/libstudents.a: lib/CMakeFiles/students.dir/Students.cpp.o
lib/libstudents.a: lib/CMakeFiles/students.dir/errorModel.cpp.o
lib/libstudents.a: lib/CMakeFiles/students.dir/build.make
lib/libstudents.a: lib/CMakeFiles/students.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/lliir/Desktop/prac_stuManage/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library libstudents.a"
	cd /home/lliir/Desktop/prac_stuManage/lib && $(CMAKE_COMMAND) -P CMakeFiles/students.dir/cmake_clean_target.cmake
	cd /home/lliir/Desktop/prac_stuManage/lib && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/students.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/CMakeFiles/students.dir/build: lib/libstudents.a

.PHONY : lib/CMakeFiles/students.dir/build

lib/CMakeFiles/students.dir/clean:
	cd /home/lliir/Desktop/prac_stuManage/lib && $(CMAKE_COMMAND) -P CMakeFiles/students.dir/cmake_clean.cmake
.PHONY : lib/CMakeFiles/students.dir/clean

lib/CMakeFiles/students.dir/depend:
	cd /home/lliir/Desktop/prac_stuManage && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/lliir/Desktop/prac_stuManage /home/lliir/Desktop/prac_stuManage/lib /home/lliir/Desktop/prac_stuManage /home/lliir/Desktop/prac_stuManage/lib /home/lliir/Desktop/prac_stuManage/lib/CMakeFiles/students.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/CMakeFiles/students.dir/depend

