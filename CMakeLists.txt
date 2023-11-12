cmake_minimum_required(VERSION 3.26)
project(rapunzel C)

set(CMAKE_C_STANDARD 23)

add_executable(rapunzel main.c
        display.c)
