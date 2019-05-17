cmake_minimum_required(VERSION 3.14)
project(sample_tdd)

set(CMAKE_CXX_STANDARD 14)

file(GLOB MAIN_CODE src/*.cpp src/*.h)
include_directories(src)

add_executable(sample_tdd main.cpp ${MAIN_CODES})

if(NOT without-test)
    enable_testing()
    include(cmake/gtest.cmake)
    add_subdirectory(test)
endif()
