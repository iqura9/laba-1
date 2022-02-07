cmake_minimum_required(VERSION 3.21)
project(dqs)

set(CMAKE_CXX_STANDARD 14)

add_executable(dqs main.cpp headers.h headers.cpp)
include_directories(/usr/local/include)