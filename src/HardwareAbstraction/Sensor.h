#include <iostream>
#include "AngleControl.h"

class Sensor {
private:
    float rawValue;
    float filteredValue;
    float sensorValue;

public:
    float readAngle();
    float filterSignal(float rawValue);
    bool checkSensorStatus();
};
