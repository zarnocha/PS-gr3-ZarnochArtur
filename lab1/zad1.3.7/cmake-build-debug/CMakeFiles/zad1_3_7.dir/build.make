# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.17

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


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

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Programy\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Programy\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\zad1_3_7.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\zad1_3_7.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\zad1_3_7.dir\flags.make

CMakeFiles\zad1_3_7.dir\main.c.obj: CMakeFiles\zad1_3_7.dir\flags.make
CMakeFiles\zad1_3_7.dir\main.c.obj: ..\main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/zad1_3_7.dir/main.c.obj"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoCMakeFiles\zad1_3_7.dir\main.c.obj /FdCMakeFiles\zad1_3_7.dir\ /FS -c "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\main.c"
<<

CMakeFiles\zad1_3_7.dir\main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/zad1_3_7.dir/main.c.i"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe > CMakeFiles\zad1_3_7.dir\main.c.i @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\main.c"
<<

CMakeFiles\zad1_3_7.dir\main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/zad1_3_7.dir/main.c.s"
	C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\cl.exe @<<
 /nologo $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) /FoNUL /FAs /FaCMakeFiles\zad1_3_7.dir\main.c.s /c "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\main.c"
<<

# Object files for target zad1_3_7
zad1_3_7_OBJECTS = \
"CMakeFiles\zad1_3_7.dir\main.c.obj"

# External object files for target zad1_3_7
zad1_3_7_EXTERNAL_OBJECTS =

zad1_3_7.exe: CMakeFiles\zad1_3_7.dir\main.c.obj
zad1_3_7.exe: CMakeFiles\zad1_3_7.dir\build.make
zad1_3_7.exe: CMakeFiles\zad1_3_7.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable zad1_3_7.exe"
	"C:\Programy\CLion 2020.3.2\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\zad1_3_7.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MICROS~2\2019\COMMUN~1\VC\Tools\MSVC\14.28.29333\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\zad1_3_7.dir\objects1.rsp @<<
 /out:zad1_3_7.exe /implib:zad1_3_7.lib /pdb:"C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug\zad1_3_7.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\zad1_3_7.dir\build: zad1_3_7.exe

.PHONY : CMakeFiles\zad1_3_7.dir\build

CMakeFiles\zad1_3_7.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\zad1_3_7.dir\cmake_clean.cmake
.PHONY : CMakeFiles\zad1_3_7.dir\clean

CMakeFiles\zad1_3_7.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7" "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7" "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug" "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug" "C:\GitHub\Programowanie strukturalne\PS-gr3-ZarnochArtur\lab1\zad1.3.7\cmake-build-debug\CMakeFiles\zad1_3_7.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\zad1_3_7.dir\depend

