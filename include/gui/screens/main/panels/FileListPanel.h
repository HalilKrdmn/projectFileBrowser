#pragma once

#include "gui/core/BasePanel.h"

class FileListPanel : public BasePanel {
public:
    explicit FileListPanel(MainWindow* manager);

    void Draw(float x, float y, float width, float height) override;
};