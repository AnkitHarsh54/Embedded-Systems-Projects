# Embedded-Systems-Projects

This repository showcases two practical electronics projects for home automation:

1. **Fridge Door Alarm System** – Alerts when a refrigerator door is left open too long.
2. **Water Level Detector & Auto-Drain System** – Monitors tank water level and triggers a pump when it exceeds the safe limit.

---

## 🧊 1. Fridge Door Alarm System

### ✅ Objective
A low-cost system that detects when the fridge door is open (via light exposure) and triggers a buzzer after a delay.

### 🔩 Components
- LDR (Light Dependent Resistor)  
- 555 Timer ICs (Monostable + Astable)  
- Resistors, Capacitors  
- Buzzer, Diode, 9V Battery  
- ESP32 (Alternate method)

### 🔁 Working
- LDR detects light when the door is open.  
- A **30s delay** is initiated using a monostable timer.  
- If still open, the **buzzer sounds** via the astable timer or ESP32 control.  
- Closes automatically when door is shut.


---

## 💧 2. Water Level Detector & Auto-Drain

### ✅ Objective
Detects water level using probes and automatically triggers a pump if the level exceeds a threshold.

### 🧠 Two Implementations
- **Without Arduino**: Uses ICs to decode level and display on 7-segment, plus pump control via relay.  
- **With Arduino**: Reads probe levels digitally, displays level in Serial Monitor, and activates relay when level ≥ 5.

### 🧰 Components
#### Without Arduino
- 74HC147, 74HC04, CD4511 ICs  
- 7-Segment Display  
- Probes, Resistors, Pump, Relay

#### With Arduino
- Arduino Uno  
- 7 Probes  
- Relay Module, Submersible Pump  
- Serial Monitor display


## 🚀 Applications

| Project | Use Cases |
|--------|-----------|
| Fridge Alarm | Home refrigerators, cold storage alerts |
| Water Level Detector | Overhead tanks, sewage, industrial monitoring |

---

## ✅ Conclusion

Both projects demonstrate how simple components or microcontrollers can solve **real-life problems** in home automation — offering efficient, low-cost, and scalable solutions.



