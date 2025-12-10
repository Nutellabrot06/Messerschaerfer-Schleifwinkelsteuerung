#pragma once
#include <string>
#include <map>

class ConfigManager {
private:
    std::map<std::string, std::string> parameters;

public:
    ConfigManager();

    std::string loadConfig();
    void saveConfig(const std::string& value);
    std::map<std::string, std::string> getDefaultConfig();
};
