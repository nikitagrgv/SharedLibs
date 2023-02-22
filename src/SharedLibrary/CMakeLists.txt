cmake_minimum_required(VERSION 3.23)
project(SharedLibraryProject)

add_library(SharedLibrary SHARED
        SharedLibrary.cpp
        SharedLibraryPrivate.h
        SharedLibraryPrivate.cpp
        )

target_compile_definitions(SharedLibrary PUBLIC API_EXPORT)

set_target_properties(SharedLibrary
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}"
        )