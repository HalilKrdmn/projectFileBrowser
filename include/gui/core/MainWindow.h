#pragma once

#define GLFW_INCLUDE_NONE
#include <GLFW/glfw3.h>

#include "gui/MainScreen.h"

class MainWindow {
public:
    MainWindow(int width, int height, const char* title);
    ~MainWindow();

    int Run() const;

private:
    GLFWwindow*  window;
    MainScreen*  m_mainScreen = nullptr;
};
