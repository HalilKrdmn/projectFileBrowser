#include "gui/panels/ContentPanel.h"

#include "imgui.h"

ContentPanel::ContentPanel(MainWindow *manager) {
}

void ContentPanel::Draw(float x, float y, float width, float height) {
    ImGui::SetNextWindowPos({x, y});
    ImGui::SetNextWindowSize({width, height});
    ImGui::PushStyleColor(ImGuiCol_WindowBg, ImVec4(0.1f, 0.1f, 1.0f, 0.3f));
    ImGui::Begin("FileList", nullptr, ImGuiWindowFlags_NoDecoration);


    ImGui::End();
    ImGui::PopStyleColor();
}
