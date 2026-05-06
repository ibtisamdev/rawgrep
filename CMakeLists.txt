cmake_minimum_required(VERSION 3.16)
project(rawgrep VERSION 0.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(rawgrep src/main.cpp)

if(CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang|AppleClang")
    target_compile_options(rawgrep PRIVATE
        -Wall -Wextra -Wpedantic -Wshadow)
endif()