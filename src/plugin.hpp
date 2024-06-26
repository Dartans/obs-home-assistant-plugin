#pragma once

class Plugin {
public:
    static Plugin& getInstance();

    void initialize();
    void shutdown();

private:
    Plugin() = default;
};
