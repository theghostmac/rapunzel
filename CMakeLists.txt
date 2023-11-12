cmake_minimum_required(VERSION 3.26)
project(rapunzel C)

set(CMAKE_C_STANDARD 23)

# include Pico SDK
include(pico_sdk_import.cmake)
pico_sdk_init()

add_executable(rapunzel main.c
        display.c)

target_link_libraries(rapunzel pico_stdlib)

# include pico-extras
pico_add_extra_outputs(rapunzel)
