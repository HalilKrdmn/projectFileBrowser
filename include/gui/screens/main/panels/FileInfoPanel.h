#pragma once

#include "gui/core/BasePanel.h"

class FileInfoPanel : public BasePanel {
public:
    explicit FileInfoPanel(MainWindow* manager);

    void Draw(float x, float y, float width, float height) override;
};