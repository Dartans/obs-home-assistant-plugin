#include "gui.hpp"
#include "home_assistant_api.hpp"
#include <vector>
#include <string>
#include <iostream>

GUI& GUI::getInstance()
{
    static GUI instance;
    return instance;
}

void GUI::initialize()
{
    createWindow();
}

void GUI::shutdown()
{
    // Cleanup if needed
}

void GUI::createWindow()
{
    // Create and display the GUI window
    std::vector<std::string> entities = HomeAssistantAPI::getInstance().getEntities();
    std::cout << "GUI Window Created" << std::endl;
    for (const auto& entity : entities) {
        std::cout << "Entity: " << entity << std::endl;
    }
    // Display entities and allow mapping changes to endpoints
}

void GUI::show()
{
    // Show the GUI window
}
