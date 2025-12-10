#include "UI_Input.h"

ConfigManager config1;

void UI_Input::readSliderInput() {
    int input = 0;
    int inactivityTimeout = std::stoi(config1.loadConfig());

    while (input < 1 || input > 4) {
    std::cout << "\n--- Menu ---\n";
    std::cout << "1. Winkel setzen\n";
    std::cout << "2. Inaktivitaet aendern\n";
    std::cout << "3. Inaktivitaet zeigen\n";
    std::cout << "4. Verlassen\n";
    std::cout << "Input hier: ";
    std::cin >> input;

        switch (input) {
            case 1:
                std::cout << "\nNeuen Sollwinkel eingeben: ";
                std::cin >> inputValue;
                onSliderChange(inputValue);
                break;

            case 2:
                std::cout << "\nNeuen Inaktivitaetswert in Minuten eingeben: ";
                std::cin >> inputValue;
                config1.saveConfig(std::to_string(inputValue));
                break;

            case 3:
                std::cout << "\nInaktivitaet zeigen: " << inactivityTimeout << std::endl;
                break;

            case 4:
                std::cout << "Verlassen...\n";
                _sleep(1000);
                exit(0);

            default:
                std::cout << "Ungültig\n";
        }
    }
}

void UI_Input::onSliderChange(float value) {
    sendTargetAngle(value);
}

void UI_Input::sendTargetAngle(float angle) {
    AngleControl::getInstance().setTargetAngle(angle);
    AngleControl::getInstance().updateControlLoop();
}