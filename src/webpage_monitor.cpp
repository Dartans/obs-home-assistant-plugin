#include "webpage_monitor.hpp"
#include "utils/http_client.hpp"
#include <thread>
#include <chrono>

WebpageMonitor& WebpageMonitor::getInstance()
{
    static WebpageMonitor instance;
    return instance;
}

void WebpageMonitor::start()
{
    // Start monitoring the webpage
    std::thread([this]() {
        while (true) {
            checkForChanges();
            std::this_thread::sleep_for(std::chrono::seconds(30));
        }
    }).detach();
}

void WebpageMonitor::stop()
{
    // Stop monitoring the webpage
}

void WebpageMonitor::checkForChanges()
{
    std::string newContent = HttpClient::get("http://example.com");
    if (hasChanged(newContent)) {
        lastContent = newContent;
        // Record and notify changes
    }
}

bool WebpageMonitor::hasChanged(const std::string& newContent)
{
    return lastContent != newContent;
}
