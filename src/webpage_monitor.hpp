#pragma once

class WebpageMonitor {
public:
    static WebpageMonitor& getInstance();

    void start();
    void stop();
    void checkForChanges();

private:
    WebpageMonitor() = default;
    std::string lastContent;
    void fetchContent();
    bool hasChanged(const std::string& newContent);
};
