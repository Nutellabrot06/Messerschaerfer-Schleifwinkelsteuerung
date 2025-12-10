#include "PersistenceService.h"
#include <fstream>
#include <iostream>

void PersistenceService::saveCalibrationData(float offset) {
    std::ofstream file("calibration.txt");
    if (file.is_open()) {
        file << offset;
    }
}

float PersistenceService::loadCalibrationData() {
    std::ifstream file("calibration.txt");
    float offset = 0.0f;

    if (file.is_open()) {
        file >> offset;
    }

    return offset;
}

void PersistenceService::logEvent(const std::string& event) {
    std::ofstream file("events.log", std::ios::app);
    if (file.is_open()) {
        file << event << "\n";
    }
}
