project(PROGAKIS_FONK LANGUAGES C CXX)

cmake_minimum_required(VERSION 3.10)

set(SOURCES 
    ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp)

add_executable(PROGAKIS_FONK ${SOURCES})

target_include_directories(PROGAKIS_FONK PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

set_target_properties(PROGAKIS_FONK PROPERTIES
    CXX_STANDARD 17
    CXX_STANDARD_REQUIRED YES
    OUTPUT_NAME progakisi_fonksiyonlar
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})