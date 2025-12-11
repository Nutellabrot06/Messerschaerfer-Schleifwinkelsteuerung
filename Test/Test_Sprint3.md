## Wiederholung Testfälle Sprint 1 + 2:

Zusätzlich zu den Testfällen MTF7-9 und ITF7-9 wurden auch die Testfälle aus Sprint 1 und 2 wiederholt. Hierbei bestanden sowohl alle Modultestfälle, als auch alle Integrationstestfälle.

## Testfälle Sprint 3:

### MTF7 - Aktualisierungsrate
    Vorbedingung:       Sensor initialisiert
    Aktion:             Aufruf von Sensor::readAngle()
    Erwartete Reaktion: Winkel alle 33ms eingelesen
    Nachbedingung:      sensorValue wird mit 30Hz aktualisiert
    Ergebnis:           Die Funktion Sesor::readAngle() hat die korrekte simulierte Aktualisierungsrate und besteht somit den Testfall

### MTF8 - Latenz
    Vorbedingung:       Sensor initialisiert
    Aktion:             Aufruf von Sensor::readAngle()
    Erwartete Reaktion: Winkel in <50ms nach tatsächlicher Änderung eingelesen
    Nachbedingung:      sensorValue ist aktualisiert
    Ergebnis:           Die Funktion Sesor::readAngle() hat die korrekte simulierte Latenz und besteht somit den Testfall

### MTF9 - Lesbarkeit
    Vorbedingung:       UI_Display initialisiert
    Aktion:             UI_Display::adjustBrightness() wird aufgerufen
    Erwartete Reaktion: Bildschirmhelligkeit passt sich an
    Nachbedingung:      Bildschirmhelligkeit hat sich der Umgebung angepasst
    Ergebnis:           Die Display-Helligkeit passt sich korrekt der Umwelt an und UI_Display::adjustBrightness() besteht somit ist der Testfall bestanden

### ITF7 - Sensor -> UI_Display
    Vorbedingung:       UI_Display und Sensor initialisiert
    Aktion:             UI_Display::adjustBrightness() wird aufgerufen
    Erwartete Reaktion: Bildschirmhelligkeit passt sich an
    Nachbedingung:      Bildschirmhelligkeit hat sich der Umgebung angepasst
    Ergebnis:           Die benötigten Funktionen aus Sensor und UI_Display werden alle korrekt aufgerufen und passen die Helligkeit an und bestehen somit den Testfall

### ITF8 - AngleControl -> ConfigManager
    Vorbedingung:       AngleControl und ConfigManager initialisiert
    Aktion:             AngleControl::inactivityWatcher() wird ausgeführt
    Erwartete Reaktion: Die Funktionen von AngleControl und ConfigManager lesen die inactivityTime aus und führen den rest korrekt aus
    Nachbedingung:      inactivityTime wird korrekt übernommen
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und passen die akzeptable Inaktivitätszeit gegebenenflals an und bestehen somit den Testfall

### ITF9 - UI_Input -> ConfigManager
    Vorbedingung:       System läuft
    Aktion:             Nutzer will Inaktivitätszeit umstellen über UI_Input::readSliderInput()
    Erwartete Reaktion: Nutzereingabe für Änderung wird gespeichert und dann übernommen
    Nachbedingung:      Inaktivitätszeit in ConfigManager gespeichert
    Ergebnis:           Die benötigten Funktionen arbeiten korrekt zusammen um das Zeitlimit zu ändern und bestehen somit den Testfall