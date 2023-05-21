cmake_minimum_required(VERSION 3.23)
project(DllPlay)

set(CMAKE_CXX_STANDARD 17)

set(INCLUDE_DIR "${CMAKE_SOURCE_DIR}/../include")
set(BIN_DIR "${CMAKE_SOURCE_DIR}/../bin")

include_directories(${INCLUDE_DIR})

add_subdirectory(SharedLibrary)
add_subdirectory(SomeProgram)
add_subdirectory(SomePlugin)