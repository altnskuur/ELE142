cmake_minimum_required(VERSION 3.10)

project(LEC5 LANGUAGES CXX)

set(SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(LEC5 ${SOURCES})

target_include_directories(LEC5 PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/../Lecutre_4_Classes_Objects)

set_target_properties(LEC5 PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    OUTPUT_NAME lec5
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

