#pragma once
#include <iostream>
#include <chrono>
#include <thread>
#include <atomic>
#include "MotorProxy.h"
#include "UI_Display.h"
#include "ConfigManager.h"

class AngleControl {
private:
    float targetAngle;
    float currentAngle;

    AngleControl();
    AngleControl(AngleControl const&) = delete;
    AngleControl& operator=(AngleControl const&) = delete;

public:
    float calculateMotorCommand(float targetAngle, float currentAngle);
    void regulateAngle();
    void updateControlLoop();
    void setTargetAngle(float angle);
    void setCurrentAngle(float angle);
    float getTargetAngle();
    float getCurrentAngle();

    void registerActivity();
    void inactivityWatcher();
    void startInactivityWatcher();
    void stopInactivityWatcher();

    std::chrono::steady_clock::time_point lastActivityTime;
    std::atomic<bool> running;
    std::thread watcherThread;

    static AngleControl& getInstance() {
        static AngleControl instance;
        return instance;
    }
};