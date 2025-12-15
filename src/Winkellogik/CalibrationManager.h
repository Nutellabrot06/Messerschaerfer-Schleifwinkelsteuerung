#include "AngleControl.h"
#include "PersistenceService.h"
#include <random>
#include <thread>
#include <chrono>
#include <iostream>
#include <sstream>
#include <iomanip>

class CalibrationManager {
private:
    float offset;

public:
    void startCalibration();
    float calculateOffset(float sensorValue);
    void applyCalibration(float offset);
};
