cmake_minimum_required(VERSION 2.8)
project(Bernard)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wextra -Wno-unused-parameter")
file(GLOB_RECURSE Bernard_SOURCES "src/*.cpp")
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/include/)
INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR}/src/)

add_executable(bin/Bernard src/main.cpp ${Bernard_SOURCES})
