#include "obs-module.h"
#include "plugin.hpp"

OBS_DECLARE_MODULE()
OBS_MODULE_USE_DEFAULT_LOCALE("obs-web-monitor-plugin", "en-US")

extern "C" bool obs_module_load(void)
{
    // Initialize the plugin
    Plugin::getInstance().initialize();
    return true;
}

extern "C" void obs_module_unload(void)
{
    // Unload the plugin
    Plugin::getInstance().shutdown();
}
