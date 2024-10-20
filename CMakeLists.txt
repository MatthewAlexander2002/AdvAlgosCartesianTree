cmake_minimum_required(VERSION 3.10)

# Project name
project(MyProject)

# Set the C++ standard (optional)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Set compilation flags (equivalent to -Wall -Wextra -g3)
add_compile_options(-Wall -Wextra -g3)

# Specify the executable output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/output)

# Add executable and source files
add_executable(main main.cpp cartesianRecursive.cpp)
