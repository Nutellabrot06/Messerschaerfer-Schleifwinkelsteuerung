## Implementierung

| ID | Tracking | Komponente | Klasse | Methoden | Sprint | Status | Testfall |
| --- | --- | --- | --- | --- | --- | --- | --- |
| F2.2 | CTR-9 | Winkellogik | AngleCorrection | correctAngle() | 2 | Implementiert | MTF4 |
| F3.1 | CTR-5 | UI | UI_Display | updateDisplay(), showStatus(), showWarning(), refreshScreen() | 1/2 | Implementiert | MTF3 |
| F3.3 | CTR-10 | UI | UI_Display | refreshScreen() | 2 | Implementiert | MTF5 |
| F3.4 | CTR-11 | UI | UI_Display | refreshScreen() | 2 | Implementiert | MTF5 |
| F5.1 | CTR-12 | HardwareAbstraction | MotorController | stopMotor(), setSafePosition() | 2 | Implementiert | MTF6, ITF6 |
| F5.2 | CTR-13 | HardwareAbstraction | MotorController | stopMotor(), setSafePosition() | 2 | Implementiert | ITF6 |
| --- | --- | --- | --- | --- | --- | --- | --- |
| NF2.1 | CTR-14 | Winkellogik | AngleControl | updateControlLoop() | 2 | Implementiert | MTF4 |
| NF4.1 | CTR-15 | Winkellogik | CalibrationManager | startCalibration() | 2 | Implementiert |  |

| Komponenete | Funktion |
| --- | --- |
| AngleCorrection | correctAngle() |
| UI_Display | setStatus(), setWarning(), getStatus(), getWarning() |
| AngleControl | setTargetAngle(), setCurrentAngle(), getTargetAngle(), getCurrentAngle(), registerActivity(), inactivityWatcher(), startInactivityWatcher(), void stopInactivityWatcher() |
| MotorProxy | checkInput() |
| MotorController | stopMotor(), setSafePosition() |