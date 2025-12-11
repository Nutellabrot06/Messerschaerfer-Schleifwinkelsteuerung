## Testfälle Sprint 1:

Aufgrund der rudimentären Natur der Requirements werden die hier angesprochene Tests manuell durchgeführt.

### MTF1 - Auslesung des Winkels als Gradwert
    Vorbedingung:       currentAngle = 25.0f
                        Sensor ist intitialisiert
                        Kein Sensorfehler simuliert
    Aktion:             Aufruf von Sensor::readAngle()
    Erwartete Reaktion: Rückgabe = 25.0f
                        kein Fehler des Sensors
    Nachbedingung:      Sensor fehlerfrei
    Ergebnis:           Die Funktion Sensor::readAngle() gibt 25.0f zurück und besteht somit den Testfall

### MTF2 - Abweichungsmessung
    Vorbedingung:       currentAngle = 30.0f
                        targetAngle = 45.0f
    Aktion:             Aufruf von AngleCorrection::calculateDeviation()
    Erwartete Reaktion: Rückgabe = 15.0f
    Nachbedingung:      keine Änderung im System
    Ergebnis:           Die Funktion AngleCorrection::calculateDeviation() gibt 15.0f zurück und besteht somit den Testfall

### MTF3 - Display
    Vorbedingung:       System läuft
    Aktion:             Aufruf von UI_Display::refreshScreen()
    Erwartete Reaktion: Alle Informationen werden auf dem "Display" widergegeben
    Nachbedingung:      "Display" sichtbar
    Ergebnis:           Die Funktion UI_Display::refreshScreen() zeigt das Display korrekt an und besteht somit den Testfall

### ITF1 - UI_Input -> AngleControl
    Vorbedingung:       UI ist initialisiert
    Aktion:             Benutzer gibt 30 als Sollwert ein
    Erwartete Reaktion: Die Funktionen von UI_Input und AngleControl arbeiten zusammen um den targetAngle auf 30.0f zu setzen
    Nachbedingung:      targetAngle = 30.0f
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und setzen den Winkel auf 30.0f und bestehen somit den Testfall

### ITF2 - CalibrationManger -> AngleControl
    Vorbedingung:       Systemstart
    Aktion:             CalibrationManager::startCalibration() wird ausgeführt
    Erwartete Reaktion: Die Funktionen von CalibrationManger und AngleControl arbeiten zusammen um den targetAngle auf 0.0f zu setzen
    Nachbedingung:      targetAngle = 0.0f
                        "Kalibrierung abgeschlossen" ausgegeben
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und setzen den Winkel auf 0.0f und bestehen somit den Testfall

### ITF3 - AngleCorrection -> AngleControl
    Vorbedingung:       currentAngle = 10.0f
                        targetAngle = 15.0f
    Aktion:             AngleCorrection::correctAngle() wird ausgeführt
    Erwartete Reaktion: Die Funktionen von AngleCorrection und AngleControl arbeiten zusammen um den targetAngle auf 0.0f zu setzen
    Nachbedingung:      targetAngle = 15.0f
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und setzen den Winkel auf 15.0f und bestehen somit den Testfall