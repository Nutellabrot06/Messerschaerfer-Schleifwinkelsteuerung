#pragma once
#include <iostream>
#include <random>
#include <thread>
#include <chrono>
#include <iostream>
#include "AngleControl.h"

class MotorController {

public:
    static MotorController& getInstance() {
        static MotorController instance;
        return instance;
    }

    void moveToAngle(float targetAngle);
    void stopMotor();
    void setSafePosition();

private:
    MotorController() {};
    MotorController(MotorController const&) = delete;
    MotorController& operator=(MotorController const&) = delete;
};