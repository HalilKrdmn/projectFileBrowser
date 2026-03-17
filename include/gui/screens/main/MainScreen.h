#pragma once

#include "gui/core/BaseScreen.h"
#include "panels/FileInfoPanel.h"
#include "panels/FileListPanel.h"

class MainScreen : public BaseScreen{
public:
    explicit MainScreen(MainWindow* manager);

    void Draw() override;

private:
    FileInfoPanel* m_fileInfo;
    FileListPanel* m_fileList;
};