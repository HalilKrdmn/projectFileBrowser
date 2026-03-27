#pragma once

#include <memory>

#include "gui/core/BasePanel.h"

class FileBrowser;
class ContentPanel : public BasePanel {
public:
    explicit ContentPanel(MainWindow* manager);
    ~ContentPanel() override;

    void Draw(float x, float y, float width, float height) override;

private:
    std::unique_ptr<FileBrowser> file_browser;
};