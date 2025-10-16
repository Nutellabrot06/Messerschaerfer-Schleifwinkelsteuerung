# Pflichtenheft:
## 1. Erkennung des aktuellen Winkels
 1.1 Der Winkel wird mit einer Genauigkeit von +-0.5Grad erfasst
 1.2 Der Winkel wird mit 30Hz gemessen
 1.3 Die Daten werden auf Plausibilität geprüft
## 2. Ansteuerung der Mechanik
 2.1 Der Sollwert soll mit einer Genauigkeit von +-0.5Grad   eingehalten werden
 2.2 Jeder zulässige Winkel soll in <1 Sekunde erreicht werden
## 3. UI
 3.1 Der aktuelle Winkel wird auf einem 30Hz Display dargestellt
 3.2 Der Nutzer kann den gewünschten Winkel per Slider eingeben
 3.3 Der Systemstatus wird dem Nutzer deutlich angezeigt
 3.4 Anweisungen werden dem Nutzer deutlich angezeigt
 3.5 Der Nutzer kann den Schleifprozess starten/stoppen
## 4. POST
 4.1 Das System prüft sich selbst beim Start auf Fehler
 4.2 Das System kalibriert den Nullwinkel beim Start mit einer   Genauigkeit von 0.2Grad
## 5. Fehlerbehandlung
 5.2 Überschreiten des Grenzwinkels von 40Grad führt zu Abschalten
 5.3 Ungültige Eingaben durch den Benutzer werden abgefangen
## 6. Sicherheitsfeatures
 6.1 Ein Notaus deaktiviert das System in <200ms
 6.2 Beim Ausschalten des Systems wird der Winkel auf einen   sicheren Wert gesetzt
 6.3 Das System schaltet sich nach 3 Minuten Inaktivität selbst aus
 6.4 Das System wird bei Überhitzung abgeschaltet um Schaden an   der Maschine und am Messer zu vermeiden
