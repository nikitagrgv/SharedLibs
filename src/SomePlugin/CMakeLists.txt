cmake_minimum_required(VERSION 3.23)
project(SomePluginProject)

add_library(SomePlugin SHARED
        SomePlugin.h
        SomePlugin.cpp
        )

set_target_properties(SomePlugin
        PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${BIN_DIR}/plugins"
        )