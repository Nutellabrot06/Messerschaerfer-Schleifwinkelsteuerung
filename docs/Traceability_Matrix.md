## Traceability-Matrix:

| ID | Tracking | Komponente | Klasse | Methoden | Sprint | Status | Testfall |
| --- | --- | --- | --- | --- | --- | --- | --- |
| F1.1 | CTR-1 | HardwareAbstraction | Sensor | readAngle() | 1 | Implementiert | MTF1 |
| F1.2 | CTR-2 | HardwareAbstraction | Sensor | checkSensorStatus() | 1 | Implementiert |  |
| F1.3 | CTR-3 | Winkellogik | AngleCorrection | checkDeviation() | 1 | Implementiert | MTF2 |
| F2.1 | CTR-4 | Winkellogik, HardwareAbstraction | AngleControl, MotorController | calculateMotorCommand(), regulateAngle(), updateControlLoop(), moveToAngle() | 1 | Implementiert | ITF1, ITF3 |
| F2.2 | CTR-9 | Winkellogik | AngleCorrection |  |  | Implementiert |  |
| F3.1 | CTR-5 | UI | UI_Display | updateDisplay(), showStatus(), showWarning(), refreshScreen() | 1 | Implementiert | MTF3 |
| F3.2 | CTR-6 | UI | UI_Input | readSliderInput(), onSliderChange(), sendTargetAngle() | 1 | Implementiert | ITF1 |
| F3.3 | CTR-10 | UI | UI_Display |  |  | Implementiert |  |
| F3.4 | CTR-11 | UI | UI_Display |  |  | Implementiert |  |
| F4.1 | CTR-7 | Winkellogik | CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() | 1 | Implementiert | ITF2 |
| F4.2 | CTR-8 | Winkellogik | CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() | 1 | Implementiert | ITF2 |
| F5.1 | CTR-12 | HardwareAbstraction | MotorController |  |  | Implementiert |  |
| F5.2 | CTR-13 | HardwareAbstraction | MotorController |  |  | Implementiert |  |
| --- | --- | --- | --- | --- | --- | --- | --- |
| NF1.1 |  | HardwareAbstraction | Sensor |  |  | Ausstehend |  |
| NF1.2 |  | HardwareAbstraction | MotorController |  |  | Ausstehend |  |
| NF2.1 | CTR-14 | Winkellogik | AngleControl |  |  | Implementiert |  |
| NF3.1 |  | UI | UI_Display |  |  | Ausstehend |  |
| NF3.2 |  | UI | UI_Display |  |  | Ausstehend |  |
| NF3.3 |  | UI | UI_Input |  |  | Ausstehend |  |
| NF4.1 | CTR-15 | Winkellogik | CalibrationManager |  |  | Implementiert |  |
| NF5.1 |  | PersistenceManager | ConfigManager |  |  | Implementiert |  |
