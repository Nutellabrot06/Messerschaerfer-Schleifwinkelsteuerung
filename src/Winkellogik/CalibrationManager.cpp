#include "CalibrationManager.h"

void CalibrationManager::startCalibration() {
    //Random Number um max 5 Sekunden Wartezeit zu simulieren
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0, 5000);

    int wait = distribution(gen);

    std::cout << "Kalibrierung gestartet...\n";

    _sleep(wait);

    offset = calculateOffset(AngleControl::getInstance().getCurrentAngle());
    applyCalibration(offset);
}

float CalibrationManager::calculateOffset(float sensorValue) {
    return -sensorValue; // Nullwinkel anpassen
}

void CalibrationManager::applyCalibration(float offset) {
    float current = AngleControl::getInstance().getCurrentAngle();
    current += offset;
    AngleControl::getInstance().setCurrentAngle(current);
    AngleControl::getInstance().updateControlLoop();
    std::cout << "Kalibrierung abgeschlossen => Offset: " << offset << std::endl;
}
