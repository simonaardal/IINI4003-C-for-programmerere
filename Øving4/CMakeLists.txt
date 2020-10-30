cmake_minimum_required(VERSION 3.15)
project(Øving4)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(gtkmm-example)

add_executable(Øving4
        gtkmm-example/main.cpp
        gtkmm-example/main.h
        oppgave1.cpp)
