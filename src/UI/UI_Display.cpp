#include "UI_Display.h"
#include "../Values.h"
#include <iostream>

void UI_Display::updateDisplay(const std::string& status, const std::string& warning) {
    //this->angle = angle;
    this->status = status;
    this->warning = warning;
    refreshScreen();
}

void UI_Display::showStatus(const std::string& status) {
    this->status = status;
    std::cout << "[STATUS] " << status << std::endl;
}

void UI_Display::showWarning(const std::string& message) {
    this->warning = message;
    std::cout << "[WARNUNG] " << message << std::endl;
}

void UI_Display::refreshScreen() {
    std::cout << "\n--- Anzeige ---\n";
    std::cout << "Aktueller Ist-Winkel: " << currentMotorPosition << " Grad" << std::endl;
    std::cout << "Aktueller Soll-Winkel: " << targetMotorPosition << " Grad" << std::endl;
    std::cout << "Status: " << status << std::endl;
    if (!warning.empty())
        std::cout << "Warnung: " << warning << std::endl;
    std::cout << "----------------\n" << std::endl;
}

