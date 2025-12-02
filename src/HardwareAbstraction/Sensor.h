#include <iostream>
#include "AngleControl.h"

class Sensor {
private:
    float sensorValue;

public:
    float readAngle();
    bool checkSensorStatus();
};
