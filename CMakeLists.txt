cmake_minimum_required(VERSION 3.10)
project(maze-solver)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(include)

# Create library for solvers
add_library(maze-solver-lib
    src/solvers/dijkstra.cpp
)

# Set target include directories for the library
target_include_directories(maze-solver-lib PUBLIC include)

# Create main executable
add_executable(maze-solver src/main.cpp)

# Link the library to the executable
target_link_libraries(maze-solver maze-solver-lib)