cmake_minimum_required(VERSION 3.10)
project(betterfetch LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Source files
set(SOURCES
    main.cpp
    functions/ascii_show.cpp
    functions/get_cpu_info.cpp
    functions/get_gpu_info.cpp
    functions/get_kernel.cpp
    functions/get_memory_info.cpp
    functions/get_os_info.cpp
    functions/get_shell.cpp
    functions/get_up_time.cpp
    functions/get_user.cpp
)

add_executable(betterfetch ${SOURCES})

target_include_directories(betterfetch PRIVATE functions)

# Linux-specific note
message(STATUS "Note: This project is Linux-only due to /proc and unistd.h usage.") 