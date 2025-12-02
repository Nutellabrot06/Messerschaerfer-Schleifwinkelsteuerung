#include "AngleCorrection.h"

float AngleCorrection::checkDeviation(float targetAngle, float currentAngle) {
    deviation = targetAngle - currentAngle;
    return deviation;
}

void AngleCorrection::correctAngle() {
    if (checkDeviation(AngleControl::getInstance().getTargetAngle(), AngleControl::getInstance().getCurrentAngle()) != 0.0f) {
        AngleControl::getInstance().updateControlLoop();
        std::cout << "Abweichung korrigiert.\n";
    }
}

