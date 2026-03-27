#include "gui/panels/content/pane/FileBrowser.h"

#include "gui/panels/content/ContentPanel.h"


#include <imgui.h>

void FileBrowser::Draw(ImDrawList* draw_list, ImVec2 avail_size, ImVec2 start_pos) {
    CalculateLayout(avail_size);


    if (cols <= 0 || draw_list == nullptr) return;
    for (int i = 0; i < file_count; i++) {
        const int col = i % cols;
        const int row = i / cols;

        ImVec2 rect_min(
            start_pos.x + padding_left + col * (rect_width + spacing_x),
            start_pos.y + padding_top  + row * (rect_height + spacing_y)
        );
        ImVec2 rect_max(
            rect_min.x + rect_width,
            rect_min.y + rect_height
        );

        ImU32 color;
        if (files[i].is_directory()) {
            color = IM_COL32(255, 200, 50, 255);
        } else {
            color = IM_COL32(
                100 + (row * 20) % 155,
                100 + (col * 30) % 155,
                200,
                255
            );
        }

        draw_list->AddRectFilled(rect_min, rect_max, color);

        std::string filename = files[i].path().filename().string();
        const ImVec2 text_size = ImGui::CalcTextSize(filename.c_str());
        ImVec2 text_pos(
            rect_min.x + (rect_width - text_size.x) / 2.0f,
            rect_max.y + 4.0f
        );

        draw_list->AddText(text_pos, IM_COL32(255, 255, 255, 255), filename.c_str());
    }
}

void FileBrowser::CalculateLayout(const ImVec2 avail_size) {

    for (const auto& entry : fs::directory_iterator(current_path)) {
        if (entry.is_regular_file() || entry.is_directory()) {
            files.push_back(entry);
        }
    }

    file_count = files.size();
    cols = static_cast<int>((avail_size.x - padding_left + spacing_x) / (rect_width + spacing_x));
}
