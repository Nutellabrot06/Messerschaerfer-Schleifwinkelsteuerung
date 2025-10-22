# Architektur

## Festlegen des Architekturmusters

### Schichtenarchitektur:

UI <-> Systemlogik <-> Winkellogik <-> HardwareAbstraction <-> PersistenceManager

| Komonente | Rolle | Aufgaben |
| --- | --- | --- |
| UI | Präsentationschicht | TC |
| Systemlogik | Anwendungsschicht | TC |
| Winkellogik | Domänenschicht | TC |
| HardwareAbstraction | Hardware-Interface | TC |
| PersistenceManager | Speicherschicht | TC |
