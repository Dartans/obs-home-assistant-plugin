#pragma once
#include <string>

class HttpClient {
public:
    static std::string get(const std::string& url);
    static void post(const std::string& url, const std::string& data);
};
