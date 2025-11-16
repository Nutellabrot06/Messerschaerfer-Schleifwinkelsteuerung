## Implementierung

| ID | Tracking | Komponente | Sprint | Testfall |
| --- | --- | --- | --- | --- |
| F1.1 | CTR-1 | Sensor | 1 | MTF1 |
| F1.2 | CTR-2 | Sensor | 1 |  |
| F1.3 | CTR-3 | AngleCorrection | 1 | MTF2 |
| F2.1 | CTR-4 | AngleControl | 1 | ITF1, ITF3 |
| F3.1 | CTR-5 | UI_Display | 1 | MTF3 |
| F3.2 | CTR-6 | UI_Input | 1 | ITF1 |
| F4.1 | CTR-7 | CalibrationManager | 1 |  |
| F4.2 | CTR-8 | CalibrationManager | 1 | ITF2 |

| Komponenete | Funktion |
| --- | --- |
| MotorController | moveToAngle() |
| Sensor | readAngle(), checkSensorStatus() |
| UI_Display | updateDisplay(), showStatus(), showWarning(), refreshScreen() |
| UI_Input | readSliderInput(), onSliderChange(), sendTargetAngle() |
| AngleControl | calculateMotorCommand(), regulateAngle(), updateControlLoop() |
| AngleCorrection | checkDeviation() |
| CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() |

Einige Funktionen wie etwa showWarning() und showStatus() wurden nur sehr einfach implementiert ohne größere Integration in das UI, welche in den folgenden Sprints erfolgen wird. Somit kann die grundlegende Funktion des Requirements bereitgestellt werden ohne den Inhalt von Sprint 1 zu überspannen und zu viele Bereiche gleichzeitig anzugehen.
