class UI_Input {
private:
    float currentValue;

public:
    float readSliderInput();
    void onSliderChange(float value);
    void sendTargetAngle(float angle);
};

