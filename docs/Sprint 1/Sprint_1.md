## Sprint 1:

### 1) Requirements:
Der Fokus in Sprint 1 liegt auf der Implementierung notwendiger Requirements, sodass die Grundfunktionalitäten des Projekts gegeben sind und weitere (nicht-funktionale) Requirements in folgenden Sprints problemlos umgesetzt werden können. Folgende Requiremmnts werden in Sprint 1 implementiert:

| ID | Tracking | Requirement | Begründung |
| --- | --- | --- | --- |
| F1.1 | CTR-1 | Auslesung des Winkels als Gradwert | Grundlegend für die Funktion des Geräts |
| F1.2 | CTR-2 | Meldung eines Sensorfehlers | Grundlegend für spätere Fehlerbehhandlung |
| F1.3 | CTR-3 | Abweichungsmessung | Grundlegend für Reglung / Korrektur |
| F2.1 | CTR-4 | Sollwert einstellen | Grundlegend für Umsetzung der Eingabe |
| F3.1 | CTR-5 | Display | Grundlegend für die Anzeige |
| F3.2 | CTR-6 | Input | Grundlegend für die Eingabe |
| F4.1 | CTR-7 | Selbsttest | Grundlegend für den korrekten Start des Geräts |
| F4.2 | CTR-8 | Nullwinkelkalibrierung | Grundlegend für den korrekten Start des Geräts |

### 2) Architektur:
Nachdem die Architektur bereits festgelegt wurde wird diese hier wieder aufgegriffen.

[Architektur](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%201/Architektur_1.md)

### 3) Design:
Die aufgearbeiteten Grundlagen des Designs werden in diesem Sprint verfeinert und mit entsprechenden visuellen Präsentationen für die Implementierung vorbereitet.

[Design](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%201/Design_1.md)

### 4) Implementierung:
[Implementierung](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/docs/Sprint%201/Implementierung_1.md)

### 5) Tests:
[Tests](https://github.com/Nutellabrot06/Messerschaerfer-Schleifwinkelsteuerung/blob/main/Test/Test_Sprint1.md)

### 6) Retrospektive:

Die Schichtenarchitektur als Grundlage wurde bei der Implementierung eingehalten, aber bei der Implementierung des Klassendiagramms wurden während der Bearbeitung einige Änderungen vorgenommen um das Programm übersichtlicher, wie auch besser zu implementieren zu machen. Folgende Änderungen wurden vorgenommen:
    
    Winkellogik:         - Schnittstelle readAngle() von CalibrationManager entfernt
                         - targetAngle wie auch currentAngle aus AngleControl wurden global implementiert
    HardwareAbstraction: - currentMotorPos von MotorController als globale Variable implementiert (s. AngleControl)

Folgende Änderungen werden bezüglich des Klassendiagramms in Vorbereitung auf Sprint 2 durchgeführt:

    UI:                  - Entfernen von UI_StatusHandler und Integration dieser Funktionen in UI_Display
                         - Entfernen der damit einhergehenden Schnittstelle notifyUI()
                         - Status und Warning global implementieren aus UI_Display
                         - showStatus() und showWarning() in updateDisplay() integrieren in UI_Display
    Winkellogik:         - Entfernen von notifyUI() in AngleCorrection
                         - correctAngle() ruft updateControlLoop() als Schnittstelle auf, nicht direkt den MotorController
    HardwareAbstraction: - Entfernen von filterSignal(), da es unnötig ist im Kontext des Geräts
                         - Implementieren des Proxys für den MotorController und entsprechendes anpassen der Schnittstellen

Zudem werden die Variablen, welche global integriert wurden in Sprint 1 zurück in die entsprechenden Klassen geschoben, sodass ein auf Dauer sauberer, gut testbarer Code entsteht.

Oben genannte Abänderungen des Softwaredesigns, sowie der Software-Architektur werden in den entsprechenden Dokumenten zu Sprint 2 überarbeitet als Grundlage dienen um von dort an weiter zu implementieren. Somit wurden unnötig komplizierte Funktionen/Klassen vereinfacht ohne Funktion zu verlieren, was für einfachere Implementierung in Sprint 2 sorgen wird.
    
