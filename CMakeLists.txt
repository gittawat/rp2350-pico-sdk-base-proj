cmake_minimum_required(VERSION 3.13)

set(PICO_PLATFORM rp2350)
set(PICO_SDK_PATH "${CMAKE_CURRENT_SOURCE_DIR}/sdk/pico-sdk")

set(PICO_NO_PICOTOOL TRUE)
#set(PICOTOOL_FETCH_FROM_GIT_PATH "/home/gttwt/Projects/shared-picotool")


set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
# Pull in SDK configuration macros
include(pico_sdk_import.cmake)

project(pico2_blinky C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 20)

# Initialize the Raspberry Pi Pico SDK
pico_sdk_init()

add_executable(pico2_blinky
    main.cpp
)

# Pull in standard library dependencies (like gpio, sleep, etc.)
target_link_libraries(pico2_blinky pico_stdlib)

# Enable USB standard output and disable UART output (optional, useful for printing)
#pico_enable_stdio_usb(pico2_blinky 1)
#pico_enable_stdio_uart(pico2_blinky 0)

# Generate standard output files including the .uf2 image
#pico_add_extra_outputs(pico2_blinky 
