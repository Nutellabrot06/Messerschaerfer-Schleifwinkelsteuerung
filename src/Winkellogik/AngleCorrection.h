class AngleCorrection {
private:
    float deviation;

public:
    float checkDeviation(float targetAngle, float currentAngle);
    void correctAngle();
    void notifyUI();
};

