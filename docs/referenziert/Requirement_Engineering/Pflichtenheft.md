# Pflichtenheft:
## 1. Erkennung des aktuellen Winkels
 1.1 Der Winkel wird mit einer Genauigkeit von +-0.5° erfasst
 
 1.2 Der Winkel wird mit 30Hz gemessen

 1.3 Messung der Abweichung von Ist- und Sollwert
## 2. Ansteuerung der Mechanik
 2.1 Der Sollwert muss mit einer Genauigkeit von +-0.5° eingehalten werden
 
 2.2 Jeder zulässige Winkel soll in <1 Sekunde erreicht werden

 2.3 Korrektur des Winkels mit Daten aus 1.3 in <1 Sekunde
## 3. Anzeige und Bedienung
 3.1 Der aktuelle Winkel wird auf einem 10Hz Display dargestellt
 
 3.2 Der Nutzer kann den gewünschten Winkel per Slider (0-40°) eingeben
 
 3.3 Der Systemstatus wird dem Nutzer deutlich angezeigt (rote/grüne Hinweise)
 
 3.4 Anweisungen werden dem Nutzer deutlich und präzise (max. 2 Zeilen) auf dem Display angezeigt
## 4. POST
 4.1 Das System prüft sich selbst beim Start auf Fehler in <5 Sekunden
 
 4.2 Das System kalibriert den Nullwinkel beim Start mit einer Genauigkeit von +-0.2° innerhalb von 5 Sekunden
## 5. Sicherheitsfeatures
 6.1 Beim Ausschalten des Systems wird der Winkel auf einen sicheren Wert (40°) gesetzt
 
 6.2 Das System schaltet sich nach 3 Minuten Inaktivität selbst aus
