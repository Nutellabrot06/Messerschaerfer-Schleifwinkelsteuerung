#include "ConfigManager.h"
#include <fstream>
#include <sstream>
#include <iostream>

ConfigManager::ConfigManager() {
    parameters = getDefaultConfig();
}

std::string ConfigManager::loadConfig() {
    std::ifstream file("config.txt");

    if (!file.is_open()) {
        return parameters["inactivityTimeout"];
    }

    std::string line;
    while (std::getline(file, line)) {
        std::istringstream iss(line);
        std::string key, value;

        if (std::getline(iss, key, '=') && std::getline(iss, value)) {
            if (key == "inactivityTimeout") {
                return value;
            }
        }
    }
    return parameters["inactivityTimeout"];
}

void ConfigManager::saveConfig(const std::string& value) {
    parameters["inactivityTimeout"] = value;

    std::ofstream file("config.txt");
    file << "inactivityTimeout=" << parameters["inactivityTimeout"] << "\n";
}

std::map<std::string, std::string> ConfigManager::getDefaultConfig() {
    return {
            {"inactivityTimeout", "3"}
    };
}
