#pragma once
#include <vector>
#include <string>

class HomeAssistantAPI {
public:
    static HomeAssistantAPI& getInstance();

    void initialize();
    void shutdown();
    std::vector<std::string> getEntities();
    void sendData(const std::string& entity, const std::string& data);

private:
    HomeAssistantAPI() = default;
    std::string apiUrl;
    std::string apiKey;
};
