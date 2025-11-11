#include "CalibrationManager.h"
#include "../Values.h"
#include <iostream>

void CalibrationManager::startCalibration() {
    std::cout << "Kalibrierung gestartet...\n";
    _sleep(2000);
    offset = calculateOffset(currentMotorPosition);
    applyCalibration(offset);
}

float CalibrationManager::calculateOffset(float sensorValue) {
    return -sensorValue; // Nullwinkel anpassen
}

void CalibrationManager::applyCalibration(float offset) {
    currentMotorPosition += offset;
    std::cout << "Kalibrierung abgeschlossen => Offset: " << offset << std::endl;
}
