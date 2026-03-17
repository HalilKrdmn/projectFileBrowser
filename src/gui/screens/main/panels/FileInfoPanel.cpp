#include "gui/screens/main/panels/FileInfoPanel.h"

#include "imgui.h"

FileInfoPanel::FileInfoPanel(MainWindow *manager) {
}

void FileInfoPanel::Draw(float x, float y, float width, float height) {
    ImGui::SetNextWindowPos({x, y});
    ImGui::SetNextWindowSize({width, height});
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.1f, 0.1f, 0.1f, 0.3f));
    ImGui::Begin("FileInfo", nullptr, ImGuiWindowFlags_NoDecoration);


    ImGui::End();
    ImGui::PopStyleColor();
}
