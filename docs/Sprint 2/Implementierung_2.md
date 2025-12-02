## Implementierung

| ID | Tracking | Komponente | Klasse | Methoden | Sprint | Status | Testfall |
| --- | --- | --- | --- | --- | --- | --- | --- |
| F2.2 | CTR-9 | Winkellogik | AngleCorrection |  |  | Implementiert |  |
| F3.1 | CTR-5 | UI | UI_Display | updateDisplay(), showStatus(), showWarning(), refreshScreen() | 1 | Implementiert | MTF3 |
| F3.3 | CTR-10 | UI | UI_Display |  |  | Implementiert |  |
| F3.4 | CTR-11 | UI | UI_Display |  |  | Implementiert |  |
| F5.1 | CTR-12 | HardwareAbstraction | MotorController |  |  | Implementiert |  |
| F5.2 | CTR-13 | HardwareAbstraction | MotorController |  |  | Implementiert |  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| NF2.1 | CTR-14 | Winkellogik | AngleControl |  |  | Implementiert |  |
| NF4.1 | CTR-15 | Winkellogik | CalibrationManager |  |  | Implementiert |  |

| Komponenete | Funktion |
| --- | --- |
| AngleCorrection | correctAngle() |
| UI_Display | setStatus(), setWarning(), getStatus(), getWarning() |
| AngleControl | setTargetAngle(), setCurrentAngle(), getTargetAngle(), getCurrentAngle(), registerActivity(), inactivityWatcher(), startInactivityWatcher(), void stopInactivityWatcher() |
| MotorProxy | checkInput() |
| MotorController | stopMotor(), setSafePosition() |