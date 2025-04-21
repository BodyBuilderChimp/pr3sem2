cmake_minimum_required(VERSION 3.10)
project(AllTasks C)

set(CMAKE_C_STANDARD 11)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(Part1)
add_subdirectory(Part2)
add_subdirectory(Part3)
add_subdirectory(Part4)
