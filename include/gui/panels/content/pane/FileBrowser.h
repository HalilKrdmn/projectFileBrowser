#pragma once

#include <memory>

#include "imgui.h"

#include <filesystem>
namespace fs = std::filesystem;
#include <vector>
class ContentPanel;

class FileBrowser {
public:
    void Draw(ImDrawList *draw_list, ImVec2 avail_size, ImVec2 start_pos);
private:
    void CalculateLayout(ImVec2);

    std::unique_ptr<ContentPanel> content_panel;

    // Just for testing
    std::string current_path = "/home/halil/";
    std::vector<fs::directory_entry> files;  // member variable
    int file_count = 0;
    int cols       = 0;

    float rect_width    = 50.0f;   // Width of the box
    float rect_height   = 100.0f;   // Height of the box
    float padding_left  = 5.0f;    // Left margin
    float padding_top   = 5.0f;    // Top margin
    float spacing_x     = 10.0f;    // Horizontal spacing between boxes
    float spacing_y     = 30.0f;    // Vertical spacing between boxes (file name included)
};