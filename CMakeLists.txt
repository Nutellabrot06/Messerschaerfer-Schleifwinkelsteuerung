cmake_minimum_required(VERSION 4.0)
project(Messerschaerfer_Schleifwinkelsteuerung)

set(CMAKE_CXX_STANDARD 14)

include_directories(src/HardwareAbstraction)
include_directories(src/PersistenceManager)
include_directories(src/UI)
include_directories(src/Winkellogik)

add_executable(Messerschaerfer_Schleifwinkelsteuerung
        src/HardwareAbstraction/MotorController.cpp
        src/HardwareAbstraction/MotorController.h
        src/HardwareAbstraction/Sensor.cpp
        src/HardwareAbstraction/Sensor.h
        src/PersistenceManager/ConfigManager.cpp
        src/PersistenceManager/ConfigManager.h
        src/PersistenceManager/PersistenceService.cpp
        src/PersistenceManager/PersistenceService.h
        src/UI/UI_Display.cpp
        src/UI/UI_Display.h
        src/UI/UI_Input.cpp
        src/UI/UI_Input.h
        src/Winkellogik/AngleControl.cpp
        src/Winkellogik/AngleControl.h
        src/Winkellogik/AngleCorrection.cpp
        src/Winkellogik/AngleCorrection.h
        src/Winkellogik/CalibrationManager.cpp
        src/Winkellogik/CalibrationManager.h
        src/main.cpp
        src/Winkellogik/MotorProxy.cpp
        src/Winkellogik/MotorProxy.h
)
