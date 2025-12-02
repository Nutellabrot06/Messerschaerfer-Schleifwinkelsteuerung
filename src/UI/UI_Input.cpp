#include "UI_Input.h"

float UI_Input::readSliderInput() {
    std::cout << "\nNeuen Sollwinkel eingeben: ";
    std::cin >> inputValue;
    onSliderChange(inputValue);
    return inputValue;
}

void UI_Input::onSliderChange(float value) {
    sendTargetAngle(value);
}

void UI_Input::sendTargetAngle(float angle) {
    AngleControl::getInstance().setTargetAngle(angle);
    AngleControl::getInstance().updateControlLoop();
}
