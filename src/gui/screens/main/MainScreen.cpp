#include "gui/screens/main/MainScreen.h"

#include "gui/Theme.h"

#include "imgui.h"

MainScreen::MainScreen(MainWindow* manager)
    : BaseScreen(manager){
    m_toolbar = new ToolbarPanel(manager);
    m_fileInfo = new FileInfoPanel(manager);
    m_fileList= new FileListPanel(manager);
    m_sidebar= new SidebarPanel(manager);
}

void MainScreen::Draw() {
    const ImGuiViewport* viewport = ImGui::GetMainViewport();

    ImGui::GetBackgroundDrawList()->AddRectFilled(
        viewport->WorkPos,
        ImVec2(viewport->WorkPos.x + viewport->WorkSize.x,
               viewport->WorkPos.y + viewport->WorkSize.y),
        ImGui::GetColorU32(Theme::BG_CONTENT)
    );

    float toolbarH = 30.0f;
    float sidebarW = viewport->WorkSize.x / 5.0f;
    float sidebarH = viewport->WorkSize.y / 3.0f;

    m_toolbar->Draw(
        viewport->WorkPos.x,
        viewport->WorkPos.y,
        viewport->WorkSize.x,
        toolbarH
    );

    m_sidebar->Draw(
        viewport->WorkPos.x,
        viewport->WorkPos.y + toolbarH,
        sidebarW,
        viewport->WorkSize.y - toolbarH - sidebarH
    );

    m_fileInfo->Draw(
        viewport->WorkPos.x,
        viewport->WorkPos.y + viewport->WorkSize.y - sidebarH,
        sidebarW,
        sidebarH
    );

    m_fileList->Draw(
        viewport->WorkPos.x + sidebarW,
        viewport->WorkPos.y + toolbarH,
        viewport->WorkSize.x - sidebarW,
        viewport->WorkSize.y - toolbarH
    );
}