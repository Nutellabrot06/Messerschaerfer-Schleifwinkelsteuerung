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
    Sensor sensor;
    AngleCorrection correction;

    AngleControl::getInstance().startInactivityWatcher();

    UI_Display::getInstance().updateDisplay();
    calib.startCalibration();

    while (true) {
        input.readSliderInput();
        correction.correctAngle();

        if (!sensor.checkSensorStatus()) {
            UI_Display::getInstance().updateDisplay();
        }
        else {
            UI_Display::getInstance().updateDisplay();
        }
    }
    return 0;
}
