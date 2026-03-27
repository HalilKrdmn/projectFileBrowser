cmake_minimum_required(VERSION 4.1)
project(projectFileBrowser)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_subdirectory(vendor)

set(CORE_SOURCES
        src/main.cpp
)

set(GUI_SOURCES
        src/gui/MainScreen.cpp
        include/gui/MainScreen.h
        include/gui/Theme.h
)

set(GUI_CORE_SOURCES
        src/gui/core/MainWindow.cpp
        include/gui/core/MainWindow.h
        include/gui/core/BaseScreen.h
        include/gui/core/BasePanel.h
)

set(GUI_PANELS_CONTENT_SOURCES
        src/gui/panels/content/ContentPanel.cpp
        include/gui/panels/content/ContentPanel.h
        src/gui/panels/content/pane/FileBrowser.cpp
        include/gui/panels/content/pane/FileBrowser.h
)

set(GUI_PANELS_SOURCES
        src/gui/panels/BottombarPanel.cpp
        include/gui/panels/BottombarPanel.h
        src/gui/panels/SidebarPanel.cpp
        include/gui/panels/SidebarPanel.h
        src/gui/panels/ToolbarPanel.cpp
        include/gui/panels/ToolbarPanel.h
)

add_executable(projectFileBrowser
        ${CORE_SOURCES}
        ${GUI_SOURCES}
        ${GUI_CORE_SOURCES}
        ${GUI_PANELS_CONTENT_SOURCES}
        ${GUI_PANELS_SOURCES}
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