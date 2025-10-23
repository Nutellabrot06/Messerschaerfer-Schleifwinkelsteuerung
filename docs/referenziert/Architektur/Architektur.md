# Architektur

## Festlegen des Architekturmusters

### Schichtenarchitektur:

```mermaid
%%-------------------------------------------------
%% Schleifwinkelsteuerung – Vereinfachtes Schichtenmodell
%%-------------------------------------------------
graph TD
UI["UI"] --> SYS["Systemlogik"]
SYS --> ANG["Winkellogik"]
ANG --> HAR["HardwareAbstraction"]
HAR --> PER["PersistenceManager"]

%% Styles
style UI fill:#e6f3ff,stroke:#4a90e2,stroke-width:2px
style SYS fill:#e9f8ec,stroke:#45a049,stroke-width:2px
style ANG fill:#fff9e6,stroke:#d1a800,stroke-width:2px
style HAR fill:#f9e6e6,stroke:#d9534f,stroke-width:2px
style PER fill:#f4e6ff,stroke:#8e44ad,stroke-width:2px

```
### Aufgaben der Komponenten:

| Komonente | Rolle | Aufgaben |
| --- | --- | --- |
| UI | Präsentationschicht | Zustandsanzeige, Nutzereingabe |
| Systemlogik | Anwendungsschicht | Systemverhalten |
| Winkellogik | Domänenschicht | Winkelsteuerung |
| HardwareAbstraction | Hardware-Interface | Sensoren |
| PersistenceManager | Speicherschicht | Kalibrierung, Limits |




