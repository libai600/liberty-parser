cmake_minimum_required(VERSION 3.12)
project(liberty_parser VERSION 2.6)

#set(CMAKE_VERBOSE_MAKEFILE ON)

# Determine if this project is the master project or
# built as a subproject (using add_subdirectory)
if(NOT DEFINED LIBERTY_PARSER_MASTER_PROJECT)
  set(LIBERTY_PARSER_MASTER_PROJECT FALSE)
  if(CMAKE_CURRENT_SOURCE_DIR STREQUAL CMAKE_SOURCE_DIR)
    set(LIBERTY_PARSER_MASTER_PROJECT TRUE)
  endif()
endif()

if(LIBERTY_PARSER_MASTER_PROJECT)

  if(CMAKE_BUILD_TYPE STREQUAL "")
    set(CMAKE_BUILD_TYPE Release)
  endif()

  # print some basic project info
  message(STATUS "---------------------------------------------")
  message(STATUS "Project: ${PROJECT_NAME} ${PROJECT_VERSION}")
  message(STATUS "Source Dir: ${CMAKE_SOURCE_DIR}")
  message(STATUS "Binary Dir: ${CMAKE_BINARY_DIR}")
  message(STATUS "Build Type: ${CMAKE_BUILD_TYPE}")
  message(STATUS "Generator: ${CMAKE_GENERATOR}")
  message(STATUS "C Compiler: ${CMAKE_C_COMPILER} ${CMAKE_C_COMPILER_ID} ${CMAKE_C_COMPILER_VERSION}")
  message(STATUS "CXX Compiler: ${CMAKE_CXX_COMPILER} ${CMAKE_CXX_COMPILER_ID} ${CMAKE_CXX_COMPILER_VERSION}")
  message(STATUS "---------------------------------------------")

  # set default output path
  set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_BINARY_DIR}/bin")
  set(CMAKE_LIBRARY_OUTPUT_DIRECTORY  "${CMAKE_BINARY_DIR}/lib")
  set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${CMAKE_BINARY_DIR}/lib")

  enable_testing()

endif()

# the sources
add_subdirectory(liberty-parse-2.6)