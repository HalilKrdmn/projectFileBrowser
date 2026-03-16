cmake_minimum_required(VERSION 4.1)
project(projectFileBrowser)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(vendor)

set(CORE_SOURCES
        src/main.cpp
)

set(GUI_CORE_SOURCES
        src/gui/core/MainWindow.cpp
        include/gui/core/MainWindow.h
        include/gui/core/BaseScreen.h
)

set(GUI_MAIN_SCREENS_SOURCES
        src/gui/screens/main/MainScreen.cpp
        include/gui/screens/main/MainScreen.h
)

add_executable(projectFileBrowser
        ${CORE_SOURCES}
        ${GUI_CORE_SOURCES}
        ${GUI_MAIN_SCREENS_SOURCES}
)

target_include_directories(projectFileBrowser PRIVATE
        "${PROJECT_SOURCE_DIR}/include"
)

find_package(glfw3 REQUIRED)
find_package(OpenGL REQUIRED)

target_link_libraries(projectFileBrowser PRIVATE
        ImGui
        glad
        glfw
        OpenGL::GL
)