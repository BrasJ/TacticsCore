cmake_minimum_required(VERSION 3.15)
project(TacticsCore)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(
    core
    entities
    utils
    io
)

# Source files
file(GLOB_RECURSE SOURCES
    main.cpp
    core/*.cpp
    entities/*.cpp
    io/*.cpp
)

add_executable(tacticscore ${SOURCES})
