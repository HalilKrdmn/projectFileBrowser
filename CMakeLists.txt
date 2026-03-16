cmake_minimum_required(VERSION 4.1)
project(projectFileBrowser)

set(CMAKE_CXX_STANDARD 23)

add_executable(projectFileBrowser main.cpp)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)