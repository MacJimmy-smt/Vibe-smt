cmake_minimum_required(VERSION 3.20)
project(rob-external LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(rob-external
    main.cpp
    gameLoop.cpp
    gameLoop.h
    inputHandler.cpp
    inputHandler.h
)

# Optional: Add include directories and libraries
target_include_directories(rob-external PUBLIC include)
target_link_libraries(rob-external PRIVATE windows)

