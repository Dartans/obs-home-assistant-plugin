#pragma once

class GUI {
public:
    static GUI& getInstance();

    void initialize();
    void shutdown();
    void show();

private:
    GUI() = default;
    void createWindow();
};
