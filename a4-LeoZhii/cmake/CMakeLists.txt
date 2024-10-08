cmake_minimum_required(VERSION 3.22)
project(
  CMakeExrcise
  VERSION 1.0
  DESCRIPTION "This is a CMake exercise."
  LANGUAGES C)
file(GLOB SOURCES "src/*.c")
add_executable(random ${SOURCES})
include_directories(include)
