## Teilaspekte:

1.  Erkennung des aktuellen Winkels
2.  Ansteuerung der Mechanik
3.  Anzeige und Bedienung
4.  POST
5.  Sicherheitsfeatures

## Funktionale Requirements:

| Nummer | Tracking | Requirement | Details |
| --- | --- | --- | --- |
| F1.1 | CTR-1 | Auslesung des Winkels als Gradwert | Erfassung des Winkels mit einer Genauigkeit von +-0.5° |
| F1.2 | CTR-2 | Meldung eines Sensorfehlers | Bei Ausfall eines Sensors wird eine Warnung ausgegeben |
| F1.3 | CTR-3 | Abweichungsmessung | Die Abweichung vom Ist- zum Sollwert wird gemessen |
| F2.1 | CTR-4 | Sollwert einstellen | Einstellung aller Winkel |
| F2.2 | CTR-9 | Winkelkorrektur | Nach F1.3 wird der Winkel in <1 Sekunde korrigiert |
| F3.1 | CTR-5 | Display | Das Display zeigt Informationen für den Nutzer an |
| F3.2 | CTR-6 | Slider | Steuerung des Winkels durch einen Slider |
| F3.3 | CTR-10 | Systemstatus | Farbkodierte (rot/grün) Meldungen |
| F3.4 | CTR-11 | Anweisungen | Präzise Anweisungen (max. 2 Zeilen) werden gegeben |
| F4.1 | CTR-7 | Selbsttest | Prüfung der Komponenten in <5 Sekunden|
| F4.2 | CTR-8 | Nullwinkelkalibrierung | Kalibrieriung des Nullwinkels mit +-0.2° in <5 Sekunden |
| F5.1 | CTR-12 | Inaktivitätsschaltung | Ausschalten nach 3 Minuten Inaktivität |
| F5.2 | CTR-13 | Sichere Positon nach Ausschalten | Winkel auf 0° beim Ausschalten |
| F5.3 | CTR-16 | Winkellimit | Winkel > 40° abfangen |

## Nicht-funktionale Requirements

| Nummer | Tracking | Requirement | Details |
| --- | --- | --- | --- |
| NF1.1 | CTR-17 | Aktualisierungsrate | Aktualisierungsrate von 30Hz |
| NF1.2 | CTR-18 | Latenz | Zeit zwischen physikalischer Änderung und Messung <50ms |
| NF2.1 | CTR-14 | Zeit zum Erreichen | Maximal 1 Sekunde aus jeder Position |
| NF3.1 | CTR-19 | Displayaktualisierung | Das Display wird mit 10Hz betrieben |
| NF3.2 | CTR-20 | Lesbarkeit | Starker Kontrast (Schrift-Hintergrund) 300Nits |
| NF3.3 | CTR-21 | Usability | Slider für jeden zu erkennen/benutzen |
| NF4.1 | CTR-15 | Dauer | Abschluss in <5 Sekunden |
| NF5.1 | CTR-22 | Konfiguration | Inaktivität anpassbar durch Nutzer |
