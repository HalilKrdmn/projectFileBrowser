#pragma once

#include "gui/core/BasePanel.h"

class ContentPanel : public BasePanel {
public:
    explicit ContentPanel(MainWindow* manager);

    void Draw(float x, float y, float width, float height) override;
};