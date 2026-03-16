#pragma once

#include "gui/core/BaseScreen.h"

class MainScreen : public BaseScreen{
public:
    explicit MainScreen(MainWindow* manager);

    void Draw() override;
};