cmake_minimum_required(VERSION 3.31)
project(progHF)

set(CMAKE_CXX_STANDARD 14)

add_executable(progHF main.cpp
        PlaneShape.cpp
        PlaneShape.h
        Point.cpp
        Point.h
        Triangle.cpp
        Triangle.h
        Circle.cpp
        Circle.h
        Rectangle.cpp
        Rectangle.h)
