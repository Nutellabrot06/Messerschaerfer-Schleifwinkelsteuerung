## Teilaspekte:

1.  Erkennung des aktuellen Winkels
2.  Ansteuerung der Mechanik
3.  Anzeige und Bedienung
4.  POST
5.  Sicherheitsfeatures

## Funktionale Requirements:

| Nummer | Tracking | Requirement | Details |
| --- | --- | --- | --- |
| F1.1 |  | Einlesung des Winkels als Gradwert | Erfassung des Winkels mit einer Genauigkeit von +-0.5° |
| F1.2 |  | Meldung eines Sensorfehlers | Bei Ausfall eines Sensors wird eine Warnung ausgegeben |
| F1.3 |  | Abweichungsmessung | Die Abweichung vom Ist- zum Sollwert wird gemessen |
| F2.1 |  | Sollwert einstellen | Einstellung aller Winkel |
| F2.2 |  | Winkelkorrektur | Nach F1.3 wird der Winkel in <1 Sekunde korrigiert |
| F3.1 |  | Displayaktualisierung | Das Display wird mit 10Hz betrieben |
| F3.2 |  | Slider | Steuerung des Winkels durch einen Slider |
| F3.3 |  | Systemstatus | Farbkodierte (rot/grün) Meldungen |
| F3.4 |  | Anweisungen | Präzise Anweisungen (max. 2 Zeilen) werden gegeben |
| F4.1 |  | Selbsttest | Prüfung der Komponenten in <5 Sekunden|
| F4.2 |  | Nullwinkelkalibrierung | Kalibrieriung des Nullwinkels mit +-0.2° in <5 Sekunden |
| F5.1 |  | Inaktivitätsschaltung | Ausschalten nach 3 Minuten Inaktivität |
| F5.2 |  | Sichere Positon nach Ausschalten | Winkel auf 40° beim Ausschalten |

## Nicht-funktionale Requirements

| Nummer | Tracking | Requirement | Details |
| --- | --- | --- | --- |
| NF1.1 |  | Aktualisierungsrate | Aktualisierungsrate von 30Hz |
| NF1.2 |  | Latenz | Zeit zwischen physikalischer Änderung und Messung <50ms |
| NF2.1 |  | Zeit zum Erreichen | Maximal 1 Sekunde aus jeder Position |
| NF3.1 |  | Lesbarkeit | Starker Kontrast (Schrift-Hintergrund; 300Nits |
| NF3.2 |  | Usability | Slider für jeden zu erkennen/benutzen |
| NF4.1 |  | Dauer | Abschluss in <5 Sekunden |
| NF5.1 |  | Konfiguration | Inaktivität anpassbar durch Nutzer |
