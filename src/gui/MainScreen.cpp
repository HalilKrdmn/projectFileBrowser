#include "../../include/gui/MainScreen.h"

#include "gui/Theme.h"

#include "imgui.h"

MainScreen::MainScreen(MainWindow* manager)
    : BaseScreen(manager){
    m_toolbar = new ToolbarPanel(manager);
    m_content= new ContentPanel(manager);
    m_sidebar= new SidebarPanel(manager);
    m_bottombar = new BottombarPanel(manager);
}

void MainScreen::Draw() {
    const ImGuiViewport* viewport = ImGui::GetMainViewport();

    ImGui::GetBackgroundDrawList()->AddRectFilled(
        viewport->WorkPos,
        ImVec2(viewport->WorkPos.x + viewport->WorkSize.x,
                     viewport->WorkPos.y + viewport->WorkSize.y),
        ImGui::GetColorU32(Theme::BG_CONTENT)
    );

    constexpr float toolbarH = 30.0f;
    constexpr float bottombarH = 15.0f;
    const float sidebarW = viewport->WorkSize.x / 8.0f;

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
        viewport->WorkSize.y - toolbarH
    );
    m_content->Draw(
        viewport->WorkPos.x + sidebarW,
        viewport->WorkPos.y + toolbarH,
        viewport->WorkSize.x - sidebarW,
        viewport->WorkSize.y - toolbarH - bottombarH
    );
    m_bottombar->Draw(
        viewport->WorkPos.x + sidebarW,
        viewport->WorkPos.y + viewport->WorkSize.y - bottombarH,
        viewport->WorkSize.x - sidebarW,
        bottombarH
    );
}