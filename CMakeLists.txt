cmake_minimum_required(VERSION 3.27)
project(cpp_basics)

set(CMAKE_CXX_STANDARD 23)

add_executable(cpp_basics main.cpp
        c-style-memory/c-style.cpp
        cpp-style-memory/cpp-style.cpp
        general/pointers.cpp)
