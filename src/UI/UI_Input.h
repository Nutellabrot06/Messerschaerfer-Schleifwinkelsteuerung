#include <iostream>
#include "AngleControl.h"

class UI_Input {
private:
    float inputValue = 0.0f;

public:
    float readSliderInput();
    void onSliderChange(float value);
    void sendTargetAngle(float angle);
};

