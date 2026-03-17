#pragma once

#include "gui/core/BasePanel.h"

class ToolbarPanel : public BasePanel {
public:
    explicit ToolbarPanel(MainWindow* manager);

    void Draw(float x, float y, float width, float height) override;
};