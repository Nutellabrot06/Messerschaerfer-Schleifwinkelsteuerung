#include <string>

class UI_Display {
private:
    float angle;
    std::string status;
    std::string warning;

public:
    void updateDisplay(const std::string& status, const std::string& message);
    void showStatus(const std::string& status);
    void showWarning(const std::string& message);
    void refreshScreen();
};
