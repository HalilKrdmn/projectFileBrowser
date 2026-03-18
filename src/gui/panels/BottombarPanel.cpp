#include "gui/panels/BottombarPanel.h"

#include "imgui.h"

BottombarPanel::BottombarPanel(MainWindow *manager) {
}

void BottombarPanel::Draw(float x, float y, float width, float height) {
    ImGui::SetNextWindowPos({x, y});
    ImGui::SetNextWindowSize({width, height});
    ImGui::GetStyle().WindowMinSize = {1, 1};
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.5f, 0.5f, 0.5f, 0.5f));
    ImGui::Begin("Bottombar", nullptr, ImGuiWindowFlags_NoDecoration);


    ImGui::End();
    ImGui::PopStyleColor();
}
