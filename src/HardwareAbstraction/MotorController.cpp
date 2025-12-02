#include "MotorController.h"

void MotorController::moveToAngle(float targetAngle) {
    //Random Number um max 1 Sekunde Wartezeit zu simulieren
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0, 1000);

    int wait = distribution(gen);

    AngleControl::getInstance().setTargetAngle(targetAngle);
    std::cout << "Motor bewegt sich zu " << targetAngle << " Grad.\n";
    _sleep(wait);
    AngleControl::getInstance().setCurrentAngle(targetAngle);
}

void MotorController::setSafePosition() {
    AngleControl::getInstance().setTargetAngle(0.0f);
    AngleControl::getInstance().setCurrentAngle(0.0f);
}

void MotorController::stopMotor() {
    setSafePosition();
}