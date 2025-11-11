## Testfälle

Aufgrund der rudimentären Natur der Requirements werden die hier angesprochene Tests manuell durchgeführt.

### TF1.1 - Auslesung des Winkels als Gradwert
    Ziel: Überprüfen der Funktionalität von Sensor::readAngle()
    Beschreibung: currentMotorPosition = 45°, aufrufen von readAngle()
    Erfolgsbedingung: Sensorwert korrekt und innerhalb Toleranz

### TF1.2 - Meldung eines Sensorfehlers
    Ziel: Überprüfen der Funktionalität von Sensor::checkSensorStatus()
    Beschreibung: currentMotorPosition auf 400°, aufrufen von checkSensorStatus()
    Erfolgsbedingung: Fehlermeldung ausgegeben

### TF1.3 - Abweichungsmessung
    Ziel: Überprüfen der Funktionalität von AngleCorrection::checkDeviation()
    Beschreibung: currentMotorPosition = 30°, targetMotorPosition = 45°, aufrufen von checkDeviation
    Erfolgsbedingung: Rückgabe von 15

### TF2.1 - Sollwert einstellen
    Ziel: Überprüfen der Funktionalität von UI_Input::sendTargetAngle()
    Beschreibung: Eingabe von 30°
    Erfolgsbedingung: targetMotorPosition auf 30 gesetzt

### TF3.1 - Display
    Ziel: Überprüfen der Funktionalität von UI_Display::updateDisplay()
    Beschreibung: Systemstart, setzten von Winkel
    Erfolgsbedingung: Anzeigen von Status, Warnung und Winkeln

### TF3.2 - Input
    Ziel: Überprüfen der Funktionalität von UI_Input::readSliderInput()
    Beschreibung: Eingabe von 30°
    Erfolgsbedingung: targetMotorPosition auf 30 gesetzt und Motorbewegung

### TF4.1 - Selbsttest
    Ziel: Überprüfen der Funktionalität von CalibrationManager()
    Beschreibung: Kalibrierung bei systemstart
    Erfolgsbedingung: Meldung "Kalibrierung abgeschlossen"

### TF4.2 - Nullwinkelkalibrierung
    Ziel: Überprüfen der Funktionalität von CalibrationManager()
    Beschreibung: currentMotorPosition = 5°, aufrufen von startCalibration()
    Erfolgsbedingung: currenMotorPosition = 0°