cmake_minimum_required(VERSION 3.17)
project(2P_Chess_with_Bot)

set(CMAKE_CXX_STANDARD 14)

add_executable(2P_Chess_with_Bot
        Board.cpp Board.h Driver.cpp)
