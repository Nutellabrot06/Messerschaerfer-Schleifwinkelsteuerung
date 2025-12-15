#include "Sensor.h"

float Sensor::readAngle(float sensorValue) {

    //Simuliert die maximal 50ms Verzögerung
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0, 50);

    int delay = distribution(gen);

    _sleep(delay);

    while (true) {
        //Simuliert 30Hz UpdateRate
        _sleep(33);
        return sensorValue;
    }
}

float Sensor::readBrightness() {

    //Simuliert Messung von Helligkeit, was dann zu Anpassung führt
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0, 1023);

    int brightness = distribution(gen);
    return brightness;
}

bool Sensor::checkSensorStatus() {
    if (sensorValue < 0) {
        UI_Display::getInstance().setWarning("Sensorfehler erkannt!");
        return false;
    }
    return true;
}
