class CalibrationManager {
private:
    float offset;

public:
    void startCalibration();
    float calculateOffset(float sensorValue);
    void applyCalibration(float offset);
};
