cmake_minimum_required(VERSION 3.20)
project(Gra_Wisielec)

set(CMAKE_CXX_STANDARD 14)

include_directories(wisielec)

add_executable(Gra_Wisielec
        wisielec/gra.cpp
        wisielec/main.cpp
        wisielec/menu.cpp
        wisielec/wszystko.h)
