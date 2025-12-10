## Sprint 3:

### 1) Requirements:
In Sprint 3 werden nicht-funktionalen Requirements implementiert, sodass alle Requirements implementiert sind.

| ID | Tracking | Requirement | Begründung |
| --- | --- | --- | --- |
| NF1.1 | CTR-17 | Aktualisierungsrate | Vervollständigung Nutzerkomfort |
| NF1.2 | CTR-18 | Latenz | Vervollständigung Nutzerkomfort |
| NF3.1 | CTR-19 | Displayaktualisierung | Vervollständigung Nutzerkomfort |
| NF3.2 | CTR-20 | Lesbarkeit | Vervollständigung Nutzerkomfort |
| NF3.3 | CTR-21 | Usability | Vervollständigung Nutzerkomfort |
| NF5.1 | CTR-22 | Konfiguration | Vervollständigung Nutzerkomfort |

### 2) Architektur:

[Architektur](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%203/Architektur_3.md)

### 3) Design:

[Design](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%203/Design_3.md)

### 4) Implementierung:
[Implementierung](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%203/Implementierung_3.md)

### 5) Tests:
[Tests](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/Test/Test_Sprint3.md)

### 6) Retrospektive:

In diesem Sprint wurde das vorab geplante Design, sowie Architektur nach Plan umgesetzt und lediglich Kleinigkeiten wurden geändert:

    UI_Display:         adjustBrightness() ohne Übergabeparameter
    PersistenceService: Schnittstelle zu CalibrationManager, nicht HardwareAbstraction
    ConfigManager:      Schnittstelle zu AngleControl, nicht HardwareAbstraction
    CalibrationManager: nutzt alle Funktionen als Schnittstelle aus PersistenceService

Zudem wurden die Aktualiserungsrate von Bildschirm und Sensor in die dazugehörigen Funktionen integriert, womit abschließend zu sagen ist, dass dieser Sprint plangmäßig und erfolgreich verlief ohne, dass größere Änderungen an Design oder Architektur im Nachhinein vollbracht werden mussten.

    
