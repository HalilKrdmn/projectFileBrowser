#include "gui/core/MainWindow.h"

#include <iostream>

int main() {
    try {
        std::cout << "================================" << std::endl;
        std::cout << " ProjectFileBrowser Starting... " << std::endl;
        std::cout << "================================" << std::endl;

        // Create MainWindow
        const MainWindow window(1280, 720, "ProjectFileBrowser");
        const int result = window.Run();

        std::cout << "[Main] Goodbye!" << std::endl;
        return result;
    } catch (const std::exception& e) {
        std::cerr << "\n[FATAL ERROR] " << e.what() << std::endl;
        return -1;
    }
}