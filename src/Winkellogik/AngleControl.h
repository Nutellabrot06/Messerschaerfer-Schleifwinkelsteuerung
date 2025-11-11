class AngleControl {
private:
    float targetAngle;
    float currentAngle;

public:
    float calculateMotorCommand(float targetAngle, float currentAngle);
    void regulateAngle();
    void updateControlLoop();
};


