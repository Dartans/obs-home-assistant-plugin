#include "plugin.hpp"
#include "webpage_monitor.hpp"
#include "home_assistant_api.hpp"
#include "gui.hpp"

Plugin& Plugin::getInstance()
{
    static Plugin instance;
    return instance;
}

void Plugin::initialize()
{
    // Initialize components
    WebpageMonitor::getInstance().start();
    HomeAssistantAPI::getInstance().initialize();
    GUI::getInstance().initialize();
}

void Plugin::shutdown()
{
    // Shutdown components
    WebpageMonitor::getInstance().stop();
    HomeAssistantAPI::getInstance().shutdown();
    GUI::getInstance().shutdown();
}
