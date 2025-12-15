#pragma once

#include <string>
#include <iostream>
#include <sensor.h>
#include "AngleControl.h"
#include "windows.h"

class UI_Display {
private:
    std::string status = "Systemstart\n        Kalibrierung gestartet...";
    std::string warning = " --- ";

    UI_Display() {};
    UI_Display(UI_Display const&) = delete;
    UI_Display& operator=(UI_Display const&) = delete;

public:
    void updateDisplay();
    void refreshScreen();
    std::string getStatus();
    std::string getWarning();
    void setStatus(std::string status_new);
    void setWarning(std::string warning_new);
    int adjustBrightness();

    static UI_Display& getInstance() {
        static UI_Display instance;
        return instance;
    }
};
