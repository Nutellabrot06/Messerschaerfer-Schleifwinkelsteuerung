#pragma once
#include <string>

class PersistenceService {
public:
    PersistenceService() = default;

    void saveCalibrationData(float offset);
    float loadCalibrationData();
    void logEvent(const std::string& event);
};
