#pragma once

#include "gui/core/BaseScreen.h"

#include "panels/BottombarPanel.h"
#include "panels/content/ContentPanel.h"
#include "panels/SidebarPanel.h"
#include "panels/ToolbarPanel.h"

class MainScreen : public BaseScreen{
public:
    explicit MainScreen(MainWindow* manager);

    void Draw() override;

private:
    ToolbarPanel* m_toolbar;
    ContentPanel* m_content;
    SidebarPanel* m_sidebar;
    BottombarPanel* m_bottombar;
};