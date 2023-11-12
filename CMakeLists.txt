cmake_minimum_required(VERSION 3.26)

# Include Pico SDK
include(pico_sdk_import.cmake)

project(rapunzel C CXX ASM)
set(CMAKE_C_STANDARD 23)
set(CMAKE_CXX_STANDARD 23)

pico_sdk_init()

add_executable(rapunzel main.c)

# Add other deps

# enable USB
pico_enable_stdio_usb(rapunzel 1)
pico_enable_stdio_uart(rapunzel 0)

# create a .uf2 file for easy flashing
pico_add_extra_outputs(rapunzel)

target_include_directories(rapunzel PRIVATE ${CMAKE_CURRENT_LIST_DIR})

# Link against the Pico SDK library
target_link_libraries(rapunzel pico_stdlib)
