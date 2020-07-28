cmake_minimum_required (VERSION 3.14)
project (procmon)

# Set the project version number.
set (procmon_VERSION_MAJOR 1)
set (procmon_VERSION_MINOR 0)
set (procmon_VERSION_PATCH 0)

# make ncurses a requirement
find_package(Curses REQUIRED)

# Configure version header file to pass CMake settings to source code.
configure_file (
  "${PROJECT_SOURCE_DIR}/src/version.h.in"
  "${PROJECT_BINARY_DIR}/src/version.h"
)

set (CMAKE_CXX_FLAGS  "${CMAKE_CXX_FLAGS} -g -fno-omit-frame-pointer -DELPP_THREAD_SAFE -D ELPP_DEFAULT_LOG_FILE='\"/var/log/procmon.log\"'")
set (CMAKE_CXX_STANDARD 17)
set (CMAKE_CXX_STANDARD_REQUIRED True)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

# Include required versioning, bcc, logging and sqlite3 header files. 
include_directories(
  "${PROJECT_BINARY_DIR}/src/"
  "/usr/include/bcc/compat"
  "${CMAKE_SOURCE_DIR}/vendor/sqlite3"
  ${CURSES_INCLUDE_DIR}
)

# Create a static library target for each subdirectory.
add_subdirectory(src/common)
add_subdirectory(src/configuration)
add_subdirectory(src/storage)
add_subdirectory(src/tracer)
add_subdirectory(src/display)
add_subdirectory(src/logging)

add_executable(
    procmon 
    src/procmon.cpp
)

target_link_libraries(
  procmon
  configuration-lib
  tracer-lib
  storage-lib
  common-lib
  display-lib 
  ${CURSES_LIBRARIES}
  -lpanel
  logging-lib
  stdc++fs
  -lbcc
)