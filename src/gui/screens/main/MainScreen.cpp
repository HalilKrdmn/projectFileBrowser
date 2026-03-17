#include "gui/screens/main/MainScreen.h"

#include "gui/Theme.h"

#include "imgui.h"

MainScreen::MainScreen(MainWindow* manager)
    : BaseScreen(manager){
    m_fileInfo = new FileInfoPanel(manager);
    m_fileList= new FileListPanel(manager);
}

void MainScreen::Draw() {
    const ImGuiViewport* viewport = ImGui::GetMainViewport();

    ImGui::GetBackgroundDrawList()->AddRectFilled(
        viewport->WorkPos,
        ImVec2(viewport->WorkPos.x + viewport->WorkSize.x,
               viewport->WorkPos.y + viewport->WorkSize.y),
        ImGui::GetColorU32(Theme::BG_CONTENT)
    );

    float sidebarW = viewport->WorkSize.x / 5.0f;
    float sidebarH = viewport->WorkSize.y / 3.0f;

    m_fileInfo->Draw(
        viewport->WorkPos.x,
        viewport->WorkPos.y + viewport->WorkSize.y - sidebarH,
        sidebarW,
        sidebarH
    );
    m_fileList->Draw(
    viewport->WorkPos.x + sidebarW,
    viewport->WorkPos.y,
    viewport->WorkSize.x - sidebarW,
    viewport->WorkSize.y
    );
}