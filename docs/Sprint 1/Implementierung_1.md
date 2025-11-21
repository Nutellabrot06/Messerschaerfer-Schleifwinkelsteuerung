## Implementierung

| ID | Tracking | Komponente | Klasse | Methoden | Sprint | Status | Testfall |
| --- | --- | --- | --- | --- |
| F1.1 | CTR-1 | HardwareAbstraction | Sensor | readAngle() | 1 | Implementiert | MTF1 |
| F1.2 | CTR-2 | HardwareAbstraction | Sensor | checkSensorStatus() | 1 | Implementiert |  |
| F1.3 | CTR-3 | Winkellogik | AngleCorrection | checkDeviation() | 1 | Implementiert | MTF2 |
| F2.1 | CTR-4 | Winkellogik, HardwareAbstraction | AngleControl, MotorController | calculateMotorCommand(), regulateAngle(), updateControlLoop(), moveToAngle() | 1 | Implementiert | ITF1, ITF3 |
| F3.1 | CTR-5 | UI | UI_Display | updateDisplay(), showStatus(), showWarning(), refreshScreen() | 1 | Teilweise | MTF3 |
| F3.2 | CTR-6 | UI | UI_Input | readSliderInput(), onSliderChange(), sendTargetAngle() | 1 | Implementiert | ITF1 |
| F4.1 | CTR-7 | Winkellogik | CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() | 1 | Implementiert | ITF2 |
| F4.2 | CTR-8 | Winkellogik | CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() | 1 | Implementiert | ITF2 |

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
