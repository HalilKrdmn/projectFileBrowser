#pragma once

#include "gui/core/BasePanel.h"

class BottombarPanel : public BasePanel {
public:
    explicit BottombarPanel(MainWindow* manager);

    void Draw(float x, float y, float width, float height) override;
};