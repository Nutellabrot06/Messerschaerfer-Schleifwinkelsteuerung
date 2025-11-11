#include "AngleControl.h"
#include "../Values.h"
#include <iostream>

float AngleControl::calculateMotorCommand(float targetAngle, float currentAngle) {
    return targetAngle - currentAngle;
}

void AngleControl::regulateAngle() {
    float diff = calculateMotorCommand(targetMotorPosition, currentMotorPosition);
    if (diff != 0.0f) {
        currentMotorPosition += diff;
        std::cout << "Motorposition angepasst: " << currentMotorPosition << "Grad" << std::endl;
    }
}

void AngleControl::updateControlLoop() {
    regulateAngle();
}

