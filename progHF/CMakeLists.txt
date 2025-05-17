cmake_minimum_required(VERSION 3.20)
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
        Rectangle.h
        Shapes.hpp
        Shapes.cpp
        gtest_lite.h
        )
