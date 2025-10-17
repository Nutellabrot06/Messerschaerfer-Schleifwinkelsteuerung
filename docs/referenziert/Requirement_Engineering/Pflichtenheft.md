# Pflichtenheft:
## 1. Erkennung des aktuellen Winkels
 1.1 Der Winkel wird mit einer Genauigkeit von +-0.5° erfasst
 
 1.2 Der Winkel wird mit 30Hz gemessen
## 2. Ansteuerung der Mechanik
 2.1 Der Sollwert muss mit einer Genauigkeit von +-0.5° eingehalten werden
 
 2.2 Jeder zulässige Winkel soll in <1 Sekunde erreicht werden
## 3. Anzeige und Bedienung
 3.1 Der aktuelle Winkel wird auf einem 10Hz Display dargestellt
 
 3.2 Der Nutzer kann den gewünschten Winkel per Slider eingeben
 
 3.3 Der Systemstatus wird dem Nutzer deutlich angezeigt
 
 3.4 Anweisungen werden dem Nutzer deutlich auf dem Display angezeigt
## 4. POST
 4.1 Das System prüft sich selbst beim Start auf Fehler
 
 4.2 Das System kalibriert den Nullwinkel beim Start mit einer Genauigkeit von +-0.2° innerhalb von 5 Sekunden
## 5. Fehlerbehandlung
 5.1 Überschreiten des Grenzwinkels von 40° wird blockiert und eine Warnung ausgegeben
 
## 6. Sicherheitsfeatures
 6.1 Beim Ausschalten des Systems wird der Winkel auf einen sicheren Wert (40°) gesetzt
 
 6.2 Das System schaltet sich nach 3 Minuten Inaktivität selbst aus
## 7. Autokorrektur des Winkels
 7.1 Wenn der Ist-Wert um mehr als einen Grad vom Soll-Wert abweicht wird der Winkel entsprechend innerhalb 1 Sekunde angepasst

