cmake_minimum_required(VERSION 3.10)

# set the project name
project(Øving6)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -pthread -Wall -Wextra")
# add the executable
add_executable(oppgave1 oppgave2 oppgave1.cpp oppgave2.cpp)
