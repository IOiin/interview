cmake_minimum_required(VERSION 3.8)

project(interview VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(SOURCE_FILES src/*.cpp)

add_executable(interview ${SOURCE_FILES} main.cpp)