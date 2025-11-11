#include "Sensor.h"
#include "../Values.h"
#include <iostream>

float Sensor::readAngle() {
    rawValue = currentMotorPosition;
    filteredValue = filterSignal(rawValue);
    return filteredValue;
}

float Sensor::filterSignal(float rawValue) {
    return rawValue; //später evtl. Durchschnitt bilden
}

//Nur physikalische Grenzen des Sensors für jetzt, später simuliern mit srand
bool Sensor::checkSensorStatus() {
    if (rawValue < -180.0f || rawValue > 180.0f) {
        std::cout << "Sensorfehler erkannt!" << std::endl;
        return false;
    }
    return true;
}
