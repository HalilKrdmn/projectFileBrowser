#pragma once

class MainWindow;

class BasePanel {
public:
    virtual void Draw(float x, float y, float width, float height) = 0;
    virtual ~BasePanel() = default;
};