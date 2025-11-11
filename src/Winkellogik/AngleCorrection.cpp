#include "AngleCorrection.h"
#include "../Values.h"
#include <iostream>

float AngleCorrection::checkDeviation(float targetAngle, float currentAngle) {
    deviation = targetAngle - currentAngle;
    return deviation;
}

void AngleCorrection::correctAngle() {
    if (checkDeviation(targetMotorPosition, currentMotorPosition) != 0.0f) {
        currentMotorPosition = targetMotorPosition;
        std::cout << "Abweichung korrigiert.\n";
    }
}

void AngleCorrection::notifyUI() {
    std::cout << "UI über Korrektur informiert.\n";
}

