#include "gui/panels/ToolbarPanel.h"

#include "imgui.h"

ToolbarPanel::ToolbarPanel(MainWindow *manager) {
}

void ToolbarPanel::Draw(float x, float y, float width, float height) {
    ImGui::SetNextWindowPos({x, y});
    ImGui::SetNextWindowSize({width, height});
    ImGui::GetStyle().WindowMinSize = {1, 1};
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(1.0f, 0.1f, 0.1f, 0.3f));
    ImGui::Begin("Toolbar", nullptr, ImGuiWindowFlags_NoDecoration);


    ImGui::End();
    ImGui::PopStyleColor();
}
