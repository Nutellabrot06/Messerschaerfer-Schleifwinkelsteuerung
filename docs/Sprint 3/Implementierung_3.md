## Implementierung

| ID | Tracking | Beschreibung | Komponente | Klasse | Methoden | Sprint | Status | Testfall |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| NF1.1 | CTR-17 | Aktualisierungsrate | HardwareAbstraction | Sensor | Meth | 3 |  |  |
| NF1.2 | CTR-18 | Latenz | HardwareAbstraction | MotorController |  | 3 |  |  |
| NF3.1 | CTR-19 | Displayaktualisierung | UI | UI_Display |  | 3 |  |  |
| NF3.2 | CTR-20 | Lesbarkeit | UI | UI_Display |  | 3 |  |  |
| NF3.3 | CTR-21 | Usability | UI | UI_Input |  | 3 |  |  |
| NF5.1 | CTR-22 | Konfiguration | PersistenceManager | ConfigManager |  | 3 |  |  |

| Komponenete | Funktion |
| --- | --- |
| ConfigManager | loadConfig(), saveConfig(), getDefaultConfig() |
| PersistenceService | saveCalibrationData(), loadCalibrationData(), logEvent() |
| Sensor | readBrigtness() |
| UI_Display | adjustBrightness() |