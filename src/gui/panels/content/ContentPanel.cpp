#include "gui/panels/content/ContentPanel.h"

#include "gui/panels/content/pane/FileBrowser.h"

#include "imgui.h"

ContentPanel::ContentPanel(MainWindow* manager)
    : file_browser(std::make_unique<FileBrowser>()) {
}

ContentPanel::~ContentPanel() = default;

void ContentPanel::Draw(float x, float y, float width, float height) {
    ImGui::SetNextWindowPos({x, y});
    ImGui::SetNextWindowSize({width, height});
    ImGui::Begin("FileList", nullptr, ImGuiWindowFlags_NoDecoration);

    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    ImVec2 avail_size = ImGui::GetContentRegionAvail();
    ImVec2 start_pos = ImGui::GetWindowPos();

    file_browser->Draw(draw_list, avail_size, start_pos);


    ImGui::End();
}
