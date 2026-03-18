#pragma once

#include "gui/core/BasePanel.h"

class SidebarPanel : public BasePanel {
public:
    explicit SidebarPanel(MainWindow* manager);

    void Draw(float x, float y, float width, float height) override;
};