#pragma once

#include "gui/core/BaseScreen.h"

#include "panels/FileInfoPanel.h"
#include "panels/FileListPanel.h"
#include "panels/SidebarPanel.h"
#include "panels/ToolbarPanel.h"

class MainScreen : public BaseScreen{
public:
    explicit MainScreen(MainWindow* manager);

    void Draw() override;

private:
    ToolbarPanel* m_toolbar;
    FileInfoPanel* m_fileInfo;
    FileListPanel* m_fileList;
    SidebarPanel* m_sidebar;
};