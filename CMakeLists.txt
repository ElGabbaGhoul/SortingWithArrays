cmake_minimum_required(VERSION 3.28)
project(arraySorting)

set(CMAKE_CXX_STANDARD 17)

add_executable(arraySorting main.cpp
        arraySorting.cpp
        arraySorting.h
        getString.cpp
        getString.h)
