# Architektur

## Festlegen des Architekturmusters

### Schichtenarchitektur:

```mermaid
%%-------------------------------------------------
%% Schleifwinkelsteuerung – Vereinfachtes Schichtenmodell
%%-------------------------------------------------
graph TD
UI["UI"] --> ANG["Winkellogik"]
ANG --> HAR["HardwareAbstraction"]
HAR --> PER["PersistenceManager"]

%% Styles
style UI fill:#e6f3ff,stroke:#4a90e2,stroke-width:2px
style ANG fill:#fff9e6,stroke:#d1a800,stroke-width:2px
style HAR fill:#f9e6e6,stroke:#d9534f,stroke-width:2px
style PER fill:#f4e6ff,stroke:#8e44ad,stroke-width:2px

```

### Bezug der Komponenten:

UI                  -> Winkellogik:         Weitergabe von Userinputs

Winkellogik         -> HardwareAbstraction: Ansteuerung der Mechanik

HardwareAbstraction -> PersistenceManager:  Log Events

### Zuordnung Requirements:

| Komponente | Requirement | Tracking |
| --- | --- | --- |
| UI | F2.1, F3.1, F3.2, F3.3, F3.4, NF3.1, NF3.2 | TC |
| Winkellogik | F1.3, F2.2, F4.1, F4.2, F5.1, F5.2, NF2.1, NF4.1 | TC |
| HardwareAbstraction | F1.1, F1.2, NF1.1, NF1.2 | TC |
| PersistenceManager | NF5.1 | TC |

### Aufgaben der Komponenten:

| Komponente | Rolle | Aufgaben |
| --- | --- | --- |
| UI | Präsentationschicht | Zustandsanzeige, Nutzereingabe |
| Winkellogik | Domänenschicht | Winkelsteuerung |
| HardwareAbstraction | Hardware-Interface | Sensoren |
| PersistenceManager | Speicherschicht | Kalibrierung, Limits, Inaktivitätszeit |

### Schnittstellen:

| Quelle | Ziel | Schnittstelle |
| --- | --- | --- |
| UI | Winkellogik | setAngle(), getWarning(), getUpdate(), startCalibration(), getState() |
| Winkellogik | HardwareAbstraction | getCurrentAngle(), applyMotorChange(), correctAngle() |
| HardwareAbstraction | PersistenceManager | readData(), writeData(), logEvent() |

Synchron:  setAngle(), getWarning(), getUpdate(), startCalibration(), getCurrentAngle()

Asynchron: startCalibration(), applyMotorChange(), correctAngle(), writeData(), logEvent()

### Technologiestack:

| Kategorie | Technologie | Begründung |
| --- | --- | --- |
| Sprache | C++ | Erfahrung, hardwarenahes Programmieren |
| VCS | Git + Github | Standard |
| Tracking | Jira | Erfahrungen sammeln |
| IDE | CLion | Erfahrung |
| Dokumentation | Markdown | simpel, agil |





