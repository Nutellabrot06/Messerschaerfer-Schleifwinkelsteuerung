#include "Sensor.h"

float Sensor::readAngle() {
    rawValue = sensorValue;
    filteredValue = filterSignal(rawValue);
    return filteredValue;
}

float Sensor::filterSignal(float rawValue) {
    AngleControl::getInstance().setCurrentAngle(rawValue);
    return rawValue;
}

bool Sensor::checkSensorStatus() {
    if (rawValue < -180.0f || rawValue > 180.0f) {
        std::cout << "Sensorfehler erkannt!" << std::endl;
        return false;
    }
    return true;
}
