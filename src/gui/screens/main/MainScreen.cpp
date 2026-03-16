#include "gui/screens/main/MainScreen.h"

#include "gui/Theme.h"

#include "imgui.h"

MainScreen::MainScreen(MainWindow* manager)
    : BaseScreen(manager){
}

void MainScreen::Draw() {
    const ImGuiViewport* viewport = ImGui::GetMainViewport();

    ImGui::GetBackgroundDrawList()->AddRectFilled(
        viewport->WorkPos,
        ImVec2(viewport->WorkPos.x + viewport->WorkSize.x,
               viewport->WorkPos.y + viewport->WorkSize.y),
        ImGui::GetColorU32(Theme::BG_CONTENT)
    );
}