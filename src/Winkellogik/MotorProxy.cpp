#include "MotorProxy.h"

void MotorProxy::checkInput(float angle) {
    if(angle > 40.0f) {
        std::cout << "Ungueltige Eingabe, da > 40 Grad" << std::endl;
        AngleControl::getInstance().setTargetAngle(0.0f);
        UI_Display::getInstance().setWarning("Ungueltige Eingabe, da > 40 Grad");
    }
    else {
        MotorController::getInstance().moveToAngle(angle);
        std::cout << "Motorposition angepasst: " << AngleControl::getInstance().getCurrentAngle() << " Grad" << std::endl;
    }
}
