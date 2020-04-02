cmake_minimum_required(VERSION 3.15)
project(Vector)

set(CMAKE_CXX_STANDARD 14)

add_executable(Vector main.cpp Vector2D.cpp Vector2D.h Vector3D.cpp Vector3D.h)