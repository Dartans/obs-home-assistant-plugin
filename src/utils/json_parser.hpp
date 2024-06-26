#pragma once
#include <string>
#include <vector>

class JsonParser {
public:
    static std::vector<std::string> parseEntities(const std::string& json);
};
