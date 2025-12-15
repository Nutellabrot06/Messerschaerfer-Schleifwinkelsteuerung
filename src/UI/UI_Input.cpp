#include "UI_Input.h"

ConfigManager config1;

HANDLE iConsole = GetStdHandle(STD_OUTPUT_HANDLE);

void UI_Input::readSliderInput() {
    int input = 0;
    int inactivityTimeout = std::stoi(config1.loadConfig());

    while (input < 1 || input > 4) {
    std::cout << "\n--- Menu ---\n";
    std::cout << "1. Winkel setzen\n";
    std::cout << "2. Inaktivitaet aendern\n";
    std::cout << "3. Inaktivitaet zeigen\n";
    std::cout << "4. Verlassen\n";
    SetConsoleTextAttribute(iConsole, FOREGROUND_GREEN);
    std::cout << "\nInput hier: ";
        SetConsoleTextAttribute(iConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    std::cin >> input;

        switch (input) {
            case 1:
                std::cout << "Neuen Sollwinkel eingeben: ";
                std::cin >> inputValue;
                if (std::cin.fail()) {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    UI_Display::getInstance().setWarning("Ungueltige Winkeleingabe");
                }
                else {
                    onSliderChange(inputValue);
                }
                break;

            case 2:
                std::cout << "\nNeuen Inaktivitaetswert in Sekunden eingeben: ";
                std::cin >> inputValue;
                if (inputValue <= 0) {
                    UI_Display::getInstance().setWarning("Eingabe für Inaktivitaet muss > 0 Sekunden sein!");
                }
                else {
                    config1.saveConfig(std::to_string(inputValue));
                    UI_Display::getInstance().setStatus("Aenderungen werden bei naechstem Systemstart übernommen");
                }
                break;

            case 3:
                std::cout << "\nInaktivitaet zeigen: " << inactivityTimeout << " Sekunden" << std::endl;
                break;

            case 4:
                std::cout << "Verlassen...\n";
                _sleep(1000);
                exit(0);

            default:
                std::cout << "Ungueltig\n";
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