## Implementierung

| ID | Tracking | Beschreibung | Komponente | Klasse | Methoden | Sprint | Status | Testfall |
| --- | --- | --- | --- | --- | --- | --- | --- | --- |
| NF1.1 | CTR-17 | Aktualisierungsrate | HardwareAbstraction | Sensor | readAngle() | 3 | Implementiert |  |
| NF1.2 | CTR-18 | Latenz | HardwareAbstraction | Sensor | readAngle() | 3 | Implementiert |  |
| NF3.1 | CTR-19 | Displayaktualisierung | UI | UI_Display | updateDisplay() | 3 | Implementiert |  |
| NF3.2 | CTR-20 | Lesbarkeit | UI | UI_Display | refreshScreen() | 3 | Implementiert |  |
| NF3.3 | CTR-21 | Usability | UI | UI_Input | readSliderInput() | 3 | Implementiert |  |
| NF5.1 | CTR-22 | Konfiguration | PersistenceManager | ConfigManager | saveConfig() | 3 | Implementiert |  |

| Komponenete | Funktion |
| --- | --- |
| ConfigManager | loadConfig(), saveConfig(), getDefaultConfig() |
| PersistenceService | saveCalibrationData(), loadCalibrationData(), logEvent() |
| Sensor | readBrigtness() |
| UI_Display | adjustBrightness() |