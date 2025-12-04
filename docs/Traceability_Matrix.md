## Traceability-Matrix:

| ID | Tracking | Beschreibung | Systemkomponente | Zugehörige Klassen | Methoden / Schnittstellen | Sprint 1 – NR | Sprint 1 – Implementierung | Sprint 1 – Testfälle | Sprint 2 – NR | Sprint 2 – Implementierung | Sprint 2 – Testfälle |
|----------|----|--------------|------------------|---------------------|----------------------------|----------------|-----------------------------|------------------------|----------------|-----------------------------|------------------------|
| **F1.1** | CTR-1 | Auslesung Winkel | HardwareAbstraction | Sensor | readAngle() | 1 | readAngle() | 🟢 MTF1 | – | – | – |
| **F1.2** | CTR-2 | Meldung Sensorfehler | HardwareAbstraction | Sensor | checkSensorStatus() | 1 | checkSensorStatus() | — | – | – | – |
| **F1.3** | CTR-3 | Abweichungsmessung | Winkellogik | AngleCorrection | checkDeviation() | 1 | checkDeviation() | 🟢 MTF2 | – | – | – |
| **F2.1** | CTR-4 | Sollwert einstellen | Winkellogik / HardwareAbstraction | AngleControl, MotorController | calculateMotorCommand(), regulateAngle(), updateControlLoop(), moveToAngle() | 1 | calculateMotorCommand(), regulateAngle(), updateControlLoop(), moveToAngle() | 🟢 ITF1, 🟢 ITF3 | – | – | – |
| **F2.2** | CTR-9 | Winkelkorrektur | Winkellogik | AngleCorrection | correctAngle() | – | – | – | 2 | correctAngle() | 🟢 MTF4, 🟢 ITF4 |
| **F3.1** | CTR-5 | Display | UI | UI_Display | updateDisplay(), showStatus(), showWarning(), refreshScreen() | 1 | updateDisplay(), showStatus(), showWarning(), refreshScreen() | 🟢 MTF3 | – | – | – |
| **F3.2** | CTR-6 | Input | UI | UI_Input | readSliderInput(), onSliderChange(), sendTargetAngle() | 1 | readSliderInput(), onSliderChange(), sendTargetAngle() | 🟢 ITF1 | – | – | – |
| **F3.3** | CTR-10 | Systemstatus | UI | UI_Display | refreshScreen() | – | – | – | 2 | refreshScreen() | 🟢 MTF5 |
| **F3.4** | CTR-11 | Anweisungen | UI | UI_Display | refreshScreen() | – | – | – | 2 | refreshScreen() | 🟢 MTF5 |
| **F4.1** | CTR-7 | Selbsttest | Winkellogik | CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() | 1 | startCalibration(), calculateOffset(), applyCalibration() | 🟢 ITF2 | – | – | – |
| **F4.2** | CTR-8 | Nullwinkelkalibrierung | Winkellogik | CalibrationManager | startCalibration(), calculateOffset(), applyCalibration() | 1 | startCalibration(), calculateOffset(), applyCalibration() | 🟢 ITF2 | – | – | – |
| **F5.1** | CTR-12 | Inaktivitätsschaltung | HardwareAbstraction | MotorController | stopMotor(), setSafePosition() | – | – | – | 2 | stopMotor(), setSafePosition() | 🟢 MTF6, 🟢 ITF6 |
| **F5.2** | CTR-13 | Sichere Ausschalt-Position | HardwareAbstraction | MotorController | stopMotor(), setSafePosition() | – | – | – | 2 | stopMotor(), setSafePosition() | 🟢 ITF6 |
| **F5.3** | CTR-16 | Winkellimit | HardwareAbstraction | MotorProxy | checkInput() | – | – | – | 2 | checkInput() | 🟢 ITF5 |
|----------|----|--------------|------------------|---------------------|----------------------------|----------------|-----------------------------|------------------------|----------------|-----------------------------|------------------------|
| **NF1.1** | CTR-17 | Aktualisierungsrate | HardwareAbstraction | Sensor | – | – | – | – | – | Ausstehend | – |
| **NF1.2** | CTR-18 | Latenz | HardwareAbstraction | MotorController | – | – | – | – | – | Ausstehend | – |
| **NF2.1** | CTR-14 | Zeit zum Erreichen | Winkellogik | AngleControl | updateControlLoop() | – | – | – | 2 | updateControlLoop() | 🟢 MTF4 |
| **NF3.1** | CTR-19 | Displayaktualisierung | UI | UI_Display | – | – | – | – | – | Ausstehend | – |
| **NF3.2** | CTR-20 | Lesbarkeit | UI | UI_Display | – | – | – | – | – | Ausstehend | – |
| **NF3.3** | CTR-21 | Usability | UI | UI_Input | – | – | – | – | – | Ausstehend | – |
| **NF4.1** | CTR-15 | Dauer | Winkellogik | CalibrationManager | startCalibration() | – | – | – | 2 | startCalibration() | – |
| **NF5.1** | CTR-22 | Konfiguration | PersistenceManager | ConfigManager | – | – | – | – | – | – | – |
