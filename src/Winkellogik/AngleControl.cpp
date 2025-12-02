#include "AngleControl.h"

MotorProxy proxy;

AngleControl::AngleControl() : targetAngle(0), currentAngle(0), running(false) {
    lastActivityTime = std::chrono::steady_clock::now();
}

float AngleControl::calculateMotorCommand(float targetAngle, float currentAngle) {
    return targetAngle - currentAngle;
}

void AngleControl::regulateAngle() {
    float diff = calculateMotorCommand(targetAngle, currentAngle);
    if (diff != 0.0f) {
        proxy.checkInput(targetAngle);
    }
}

void AngleControl::updateControlLoop() {
    regulateAngle();
}

void AngleControl::setTargetAngle(float angle) {
    targetAngle = angle;
}

void AngleControl::setCurrentAngle(float angle) {
    currentAngle = angle;
}

float AngleControl::getTargetAngle() {
    return targetAngle;
}

float AngleControl::getCurrentAngle() {
    return currentAngle;
}

void AngleControl::startInactivityWatcher() {
    running = true;

    watcherThread = std::thread(&AngleControl::inactivityWatcher, this);
}

void AngleControl::stopInactivityWatcher() {
    running = false;
    if (watcherThread.joinable()) {
        watcherThread.join();
    }
}

void AngleControl::inactivityWatcher() {
    while (running) {
        auto now = std::chrono::steady_clock::now();
        auto inactiveSeconds = std::chrono::duration_cast<std::chrono::seconds>(now - lastActivityTime).count();

        if (inactiveSeconds >= 5) {
            UI_Display::getInstance().setWarning("Inaktivitaet, Motor wird ausgeschaltet");
            UI_Display::getInstance().updateDisplay();
            MotorController::getInstance().stopMotor();
            running = false;
        }

        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
}
