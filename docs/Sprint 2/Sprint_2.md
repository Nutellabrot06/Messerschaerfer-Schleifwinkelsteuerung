## Sprint 2:

### 1) Requirements:
In Sprint 2 werden die restlichen funktionalen, wie auch die ersten Nicht-Ffunktionalen requirements implementiert, sodass die wichtigsten Requirements integriert sind.

| ID | Tracking | Requirement | Begründung |
| --- | --- | --- | --- |
| F2.2 | CTR-9 | Winkelkorrektur | Funktional |
| F3.1 | CTR-5 | Display | Vervollständigung |
| F3.3 | CTR-10 | Systemstatus | Funktional |
| F3.4 | CTR-11 | Anweisungen | Funktional |
| F5.1 | CTR-12 | Inaktivitätsschaltung | Funktional |
| F5.2 | CTR-13 | Sichere Positon nach Ausschalten | Funktional |
| NF2.1 | CTR-14 | Korrekturzeit | Kopplung an F2.2 |
| NF4.1 | CTR-15 | Selbstkalibrierungsdauer | Kopplung an F4.2 |

### 2) Architektur:
Nachdem die Architektur bereits festgelegt wurde wird diese hier wieder aufgegriffen.

[Architektur](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%202/Architektur_2.md)

### 3) Design:

[Design](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%202/Design_2.md)

### 4) Implementierung:
[Implementierung](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%202/Implementierung_2.md)

### 5) Tests:
[Tests](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/Test/Test_Sprint2.md)

### 6) Retrospektive:

Folgend auf die Änderungen am Design aus Sprint 1 wurden diese alle entsprechend umgesetzt, aber es kamen auch während der Bearbeitung neue Funktionen, vor allem bezüglich des Inaktivitätstimers, auf. Dies veranlasste ein erneutes überarbeiten des Klassendiagramms auf "Klassendiagramm_Sprint_2_V2.png". Änderungen hierbei sind:
    
    Winkellogik:         - targetAngle, currentAngle und zugehörige getter/setter lokal in AngleControl
                         - lastActivityTime, running, watcherThread lokal in AngleControl zur Inaktivitätsmessung
                         - registerActivity(), inactivityWatcher(), startInactivityWatcher(), stopInactivityWatcher() in AngleControl zur Inaktivitätsmessung
    UI:                  - status, warning und zugehörige getter/setter lokal in UI_Display

Nachdem jetzt mit Sprint 2 alle funktionalen Requirements implementiert sind werden in Sprint 3 diejenigen Requirements umgesetzt, welche lediglich dem Komfort des Nutzers dienen. Hierfür werden folgende Änderungen am Design vorgenommen:

    UI:                  - adjustBrightness() in UI_Display
    HardwareAbstraction: - brightness Variable in Snesor
                         - readBrightness() Funktion in Sensor

    
