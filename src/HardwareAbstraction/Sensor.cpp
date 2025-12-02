#include "Sensor.h"

float Sensor::readAngle() {
    return sensorValue;
}

bool Sensor::checkSensorStatus() {
    if (sensorValue < -180.0f || sensorValue > 180.0f) {
        std::cout << "Sensorfehler erkannt!" << std::endl;
        return false;
    }
    return true;
}
