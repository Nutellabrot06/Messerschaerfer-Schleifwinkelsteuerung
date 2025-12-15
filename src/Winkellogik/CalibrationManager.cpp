#include "CalibrationManager.h"

PersistenceService persistence;

void CalibrationManager::startCalibration() {
    offset = persistence.loadCalibrationData();

    if (offset != 0.0f) {
        applyCalibration(offset);
    }
    //Random Number um max 5 Sekunden Wartezeit zu simulieren
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0, 5000);

    int wait = distribution(gen);

    _sleep(wait);

    offset = calculateOffset(AngleControl::getInstance().getCurrentAngle());
    applyCalibration(offset);

    persistence.saveCalibrationData(offset);
    persistence.logEvent("Calibration fertig. Offset: " + std::to_string(offset));
}

float CalibrationManager::calculateOffset(float sensorValue) {
    return -sensorValue; // Nullwinkel anpassen
}

void CalibrationManager::applyCalibration(float offset) {
    float current = AngleControl::getInstance().getCurrentAngle();
    current += offset;
    AngleControl::getInstance().setCurrentAngle(current);
    AngleControl::getInstance().updateControlLoop();
    std::ostringstream oss;
    oss << std::fixed << std::setprecision(1) << offset;
    UI_Display::getInstance().setStatus("Kalibrierung abgeschlossen => Offset: " + oss.str() + "\n        Bereitschaft");
    UI_Display::getInstance().updateDisplay();
}
