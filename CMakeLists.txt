cmake_minimum_required(VERSION 3.10)
project(path-finder)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add include directories
include_directories(include)

# Create library for solvers
add_library(path-finder-lib
    src/solvers/dijkstra.cpp
)

# Set target include directories for the library
target_include_directories(path-finder-lib PUBLIC include)

# Create main executable
add_executable(path-finder src/main.cpp)

# Link the library to the executable
target_link_libraries(path-finder path-finder-lib)