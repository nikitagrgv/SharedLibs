cmake_minimum_required(VERSION 3.23)
project(SomeProgramProject)

add_executable(SomeProgram
        main.cpp
        )

target_link_libraries(SomeProgram SharedLibrary)

set_target_properties(SomeProgram
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}"
        )