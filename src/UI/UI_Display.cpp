#include "UI_Display.h"
#include <iostream>
#include "AngleControl.h"
#include "windows.h"

HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void UI_Display::updateDisplay() {
    refreshScreen();
}

void UI_Display::refreshScreen() {
    std::cout << "\n--- Anzeige ---\n";
    std::cout << "Aktueller Ist-Winkel: " << AngleControl::getInstance().getCurrentAngle() << " Grad" << std::endl;
    std::cout << "Aktueller Soll-Winkel: " << AngleControl::getInstance().getTargetAngle() << " Grad" << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE);
    std::cout << "Status: "  << status  << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    if (warning != " --- ") {
        SetConsoleTextAttribute(hConsole, FOREGROUND_RED);
    }
    std::cout << "Warning: " << warning << std::endl;
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);

    warning = " --- ";
    status = "Bereitschaft";
}

void UI_Display::setStatus(std::string status_new) {
    status = status_new;
}

void UI_Display::setWarning(std::string warning_new) {
    warning = warning_new;
}

std::string UI_Display::getStatus() {
    return status;
}

std::string UI_Display::getWarning() {
    return warning;
}

