cmake_minimum_required(VERSION 3.10)

project(LEC4 LANGUAGES CXX)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(LEC4 ${SOURCES})

target_include_directories(LEC4 PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(LEC4 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    OUTPUT_NAME lec4
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})