#include "gui/screens/main/panels/SidebarPanel.h"

#include "imgui.h"

SidebarPanel::SidebarPanel(MainWindow *manager) {
}

void SidebarPanel::Draw(float x, float y, float width, float height) {
    ImGui::SetNextWindowPos({x, y});
    ImGui::SetNextWindowSize({width, height});
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.1f, 1.0f, 0.1f, 0.3f));
    ImGui::Begin("Sidebar", nullptr, ImGuiWindowFlags_NoDecoration);


    ImGui::End();
    ImGui::PopStyleColor();
}
