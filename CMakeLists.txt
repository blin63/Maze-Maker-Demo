cmake_minimum_required(VERSION 3.20)
project(lab1template)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -pedantic")
set(CMAKE_CXX_STANDARD 20)

add_executable(lab9template main.cpp maze_factory.cpp maze_factory.hpp maze_game.cpp maze_game.hpp maze.cpp maze.hpp room.cpp room.hpp wall.cpp wall.hpp door.cpp door.hpp)
