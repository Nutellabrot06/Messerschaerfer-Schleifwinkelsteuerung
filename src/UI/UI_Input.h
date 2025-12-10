#include <iostream>
#include "AngleControl.h"
#include "ConfigManager.h"

class UI_Input {
private:
    float inputValue = 0.0f;

public:
    void readSliderInput();
    void onSliderChange(float value);
    void sendTargetAngle(float angle);
};

