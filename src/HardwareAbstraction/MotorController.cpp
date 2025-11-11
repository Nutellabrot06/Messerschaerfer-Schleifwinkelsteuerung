#include "MotorController.h"
#include "../Values.h"
#include <iostream>

void MotorController::moveToAngle(float targetAngle) {
    targetMotorPosition = targetAngle;
    std::cout << "Motor bewegt sich zu " << targetAngle << " Grad.\n";
    _sleep(500);
    currentMotorPosition = targetAngle;
}
