cmake_minimum_required(VERSION 3.10)

project(MEMORY LANGUAGES CXX)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(MEMORY ${SOURCES})

target_include_directories(MEMORY PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(MEMORY PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    OUTPUT_NAME memory
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

