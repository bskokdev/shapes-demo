cmake_minimum_required(VERSION 3.24)
project(Shapes)

set(CMAKE_CXX_STANDARD 17)

add_executable(Shapes main.cpp Shape.h Rectangle.cpp Rectangle.h Square.cpp Square.h Circle.cpp Circle.h)
