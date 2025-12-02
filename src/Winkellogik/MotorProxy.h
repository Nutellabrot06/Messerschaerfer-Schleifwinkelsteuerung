#pragma once

#include "MotorController.h"
#include <iostream>
#include "AngleControl.h"
#include "UI_Display.h"

class MotorProxy {

public:
    void checkInput(float angle);
};
