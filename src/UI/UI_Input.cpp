#include "UI_Input.h"
#include "../Values.h"
#include <iostream>

float UI_Input::readSliderInput() {
    std::cout << "Neuen Sollwinkel eingeben: ";
    std::cin >> currentValue;
    onSliderChange(currentValue);
    return currentValue;
}

void UI_Input::onSliderChange(float value) {
    sendTargetAngle(value);
}

void UI_Input::sendTargetAngle(float angle) {
    targetMotorPosition = angle;
    std::cout << "Sollwinkel auf " << angle << " Grad gesetzt." << std::endl;
}
