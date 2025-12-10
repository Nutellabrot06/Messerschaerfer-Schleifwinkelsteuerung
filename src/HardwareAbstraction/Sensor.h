#pragma once

#include <iostream>
#include "AngleControl.h"

class Sensor {
private:
    float sensorValue;
    float brightness;

    Sensor() {};
    Sensor(Sensor const&) = delete;
    Sensor& operator=(Sensor const&) = delete;

public:
    float readAngle();
    float readBrightness();
    bool checkSensorStatus();

    static Sensor& getInstance() {
        static Sensor instance;
        return instance;
    }
};
