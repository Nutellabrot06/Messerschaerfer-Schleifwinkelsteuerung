## Wiederholung Testfälle Sprint 1:

Zusätzlich zu den Testfällen MTF4-6 und ITF4-6 wurden auch die Testfälle aus Sprint 1 wiederholt. Hierbei bestanden alle Modultestfälle erneut, die Integrationstestfälle allerdings wie zu erwarten nicht mehr, da die Schnittstelle zwischen AngleControl und MotorController um MotorProxy ergänzt wurde. Somit ruft AngleControl nicht mehr direkt den MotorController, sondern den MotorProxy, auf. Diese Schnittstellen werden dementsprechend in den Testfällen ITF4-6 aus Sprint 2 getestet um ein lauffähiges Programm zu garantieren. Die Fälle ITF1-3 fokussieren sich nun nach deren Überarbeitung auf die Interaktion zwischen den jeweiligen Klassen und AngleControl.

## Testfälle Sprint 2:

### MTF4 - Dauer der Winkelkorrektur
    Vorbedingung:       currentAngle = 10.0f
                        targetAngle = 30.0f
                        MotorController ist intitialisiert
    Aktion:             Aufruf von MotorController::moveToAngle()
    Erwartete Reaktion: current Angle soll in weniger als 1 Sekunde erreicht werden
    Nachbedingung:      currentAngle = 30.0f
    Ergebnis:           Die Funktion MotorController::moveToAngle() setzt den currentAngle innerhalb einer Sekunde auf 10.0f und besteht somit den Testfall

### MTF5 - Farbcodes
    Vorbedingung:       status = "Bereitschaft"
                        warning = "Warnung xyz"
                        UI_Display initialisiert
    Aktion:             Aufruf von UI_Display::refreshSchreen()
    Erwartete Reaktion: Status-Zeile in blau, Warnung-Zeile bei vorhandener Warnung in rot
    Nachbedingung:      "Display" sichtbar
    Ergebnis:           Die Funktion UI_Display::refreshSchreen() gibt Status in blau, und Warnung in rot aus und besteht somit den Testfall

### MTF6 - Inaktivitätsmessung
    Vorbedingung:       System läuft
                        AngleControl::startInactivityWatcher() aufgerufen
    Aktion:             Inaktivität für 3 Minuten
    Erwartete Reaktion: Nach 3 Minuten wird die Inaktivität registriert
    Nachbedingung:      Ausgabe, dass Inaktivität bemerkt wurde
    Ergebnis:           Die Ausgabe zur Inaktivität wurde korrekt nach 3 Minuten ausgeführt somit ist der Testfall bestanden

### ITF4 - AngleCorrection -> AngleControl -> MotorProxy -> MotorController
    Vorbedingung:       currentAngle = 10.0f
                        targetAngle = 20.0f
    Aktion:             AngleCorrection::correctAngle() wird aufgerufen
    Erwartete Reaktion: Die Funktionen von AngleCorrection, AngleControl, MotorProxy und MotorController arbeiten zusammen um den currentAngle auf 20.0f zu setzen
    Nachbedingung:      currentAngle = 20.0f
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und setzen den Winkel auf 20.0f und bestehen somit den Testfall

### ITF5 - AngleControl -> MotorProxy -> MotorController
    Vorbedingung:       currentAngle = 10.0f
                        targetAngle = 45.0f
    Aktion:             AngleControl::updateControlLoop() wird ausgeführt
    Erwartete Reaktion: Die Funktionen von AngleControl, MotorProxy und MotorController arbeiten zusammen und der Proxy fängt den Input ab
    Nachbedingung:      currentAngle = 0.0f
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und setzen den Winkel auf 0.0f nachdem der Input abgefangen wird und bestehen somit den Testfall

### ITF6 - AngleControl -> MotorProxy -> MotorController
    Vorbedingung:       currentAngle = 10.0f
                        targetAngle = 10.0f
    Aktion:             Inaktivität für 3 Minuten
    Erwartete Reaktion: Die Funktionen von AngleControl, MotorProxy und MotorController arbeiten zusammen um den Motor nach 3 Minuten Inaktivität auf 0.0f zu setzten
    Nachbedingung:      currentAngle = 0.0f
                        Programm beendet
    Ergebnis:           Die benötigten Funktionen werden alle korrekt aufgerufen und schalten den Motor aus und bestehen somit den Testfall