#include "home_assistant_api.hpp"
#include "utils/http_client.hpp"
#include "utils/json_parser.hpp"

HomeAssistantAPI& HomeAssistantAPI::getInstance()
{
    static HomeAssistantAPI instance;
    return instance;
}

void HomeAssistantAPI::initialize()
{
    apiUrl = "http://homeassistant.local:8123/api";
    apiKey = "YOUR_API_KEY";
}

void HomeAssistantAPI::shutdown()
{
    // Cleanup if needed
}

std::vector<std::string> HomeAssistantAPI::getEntities()
{
    std::string response = HttpClient::get(apiUrl + "/states?api_key=" + apiKey);
    return JsonParser::parseEntities(response);
}

void HomeAssistantAPI::sendData(const std::string& entity, const std::string& data)
{
    HttpClient::post(apiUrl + "/states/" + entity + "?api_key=" + apiKey, data);
}
