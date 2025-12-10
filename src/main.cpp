#include "UI/UI_Display.h"
#include "UI/UI_Input.h"
#include "Winkellogik/AngleControl.h"
#include "Winkellogik/CalibrationManager.h"
#include "HardwareAbstraction/Sensor.h"
#include "HardwareAbstraction/MotorController.h"
#include <iostream>
#include "AngleCorrection.h"
#include "MotorProxy.h"

int main() {
    UI_Input input;
    CalibrationManager calib;
    AngleCorrection correction;

    AngleControl::getInstance().startInactivityWatcher();

    UI_Display::getInstance().updateDisplay();
    calib.startCalibration();

    while (true) {
        input.readSliderInput();
        AngleControl::getInstance().registerActivity();

        correction.correctAngle();

        if (!Sensor::getInstance().checkSensorStatus()) {
            UI_Display::getInstance().updateDisplay();
        }
        else {
            UI_Display::getInstance().updateDisplay();
        }
    }
    return 0;
}
