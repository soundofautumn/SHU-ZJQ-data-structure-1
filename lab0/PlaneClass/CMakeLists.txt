cmake_minimum_required(VERSION 3.26)

project(PlaneClass)

set(CMAKE_CXX_STANDARD 11)

add_executable(PlaneClass main.cpp
        Point2D.h
        Point2D.cpp
        Shape2D.cpp
        Shape2D.h
        Line.cpp
        Line.h
        Circle.cpp
        Circle.h
        Triangle.cpp
        Triangle.h
        Rectangle.cpp
        Rectangle.h
        Polygon.cpp
        Polygon.h)
