class Sensor {
private:
    float rawValue;
    float filteredValue;

public:
    float readAngle();
    float filterSignal(float rawValue);
    bool checkSensorStatus();
};
