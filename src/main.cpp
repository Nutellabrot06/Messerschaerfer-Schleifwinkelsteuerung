#include "UI/UI_Display.h"
#include "UI/UI_Input.h"
#include "Winkellogik/AngleControl.h"
#include "Winkellogik/CalibrationManager.h"
#include "HardwareAbstraction/Sensor.h"
#include "HardwareAbstraction/MotorController.h"
#include "Values.h"
#include <iostream>

int main() {
    UI_Display display;
    UI_Input input;
    AngleControl controller;
    CalibrationManager calib;
    Sensor sensor;
    MotorController motor;

    display.showStatus("Systemstart");
    calib.startCalibration();

    while (true) {
        float inputVal = input.readSliderInput();
        motor.moveToAngle(inputVal);
        controller.updateControlLoop();

        float angle = sensor.readAngle();
        if (!sensor.checkSensorStatus()) {
            display.updateDisplay("Fehlerhaft", "Sensorfehler");
        }
        else {
            display.updateDisplay("Bereitschaft", "---");
        }
    }
    return 0;
}
