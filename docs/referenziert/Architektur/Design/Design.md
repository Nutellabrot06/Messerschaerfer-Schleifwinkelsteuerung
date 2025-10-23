# Design

1. UI
   | Komponente | Aufgabe | Input | Output |
   | --- | --- | --- | --- |
   | UI_Display | Darstellung von Winkel, Status, Warnungen | Winkelwerte | Anzeige |
   | UI_Input | Verarbeitung des Winkel-Sliders | User-Input | Sollwinkel |
   | UI_StatusHandler | Visualisierung der Betriebszustände | Systemzustand | Statusanzeige |

2. Systemlogik
   | Komponente | Aufgabe | Input | Output |
   | --- | --- | --- | --- |
   | SystemController | Start, POST, Betrieb, Abschalten | Events | Systemzustand |
   | SafetyManager | Überwachung Grenzwert, Inaktivitätsschaltung | Winkelwerte | Motoranweisung, Warnung |
   | ModeManager | Verwaltung von Zuständen | Sensorstatus | Zustandswechsel |

3. Winkellogik
   | Komponente | Aufgabe | Input | Output |
   | --- | --- | --- | --- |
   | AngleControl | Regelungsalgorithmus des Winkels | Sollwinkel, Istwinkel | Motoranweisung |
   | AngleCorrection | Winkelkorrektur | Sollwinkel, Istwinkel | Motoranweisung |
   | CalibrationManager | Kalibrierung des Nullwinkels | Sensorwert | / |

4. HardwareAbstraction
   | Komponente | Aufgabe | Input | Output |
   | --- | --- | --- | --- |
   | Sensor | Winkelmessung | Messung | Istwinkel |
   | MotorController | Steuert Motorposition | Sollwinkel | Motorbewegung |

5. PersistenceManager
   | Komponente | Aufgabe | Input | Output |
   | --- | --- | --- | --- |
   | ConfigManager | Konfiguration | Parameter | Parameter |
   | PersistanceService | Speichern/Laden von Daten | Daten | / |

