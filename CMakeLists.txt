cmake_minimum_required(VERSION 3.20)
project(CPP)

set(CMAKE_CXX_STANDARD 14)

include_directories(Day00/ex01)

add_executable(CPP
        Day00/ex00/megaphone.cpp
        Day00/ex01/Contact.hpp)
