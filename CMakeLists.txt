cmake_minimum_required(VERSION 3.2)
project(DeautoTest)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

set(SOURCE_FILES main.cpp Piece.cpp Piece.h Queen.cpp Queen.h)

add_executable(DeautoTest ${SOURCE_FILES})