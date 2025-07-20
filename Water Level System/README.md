# 💧 Water Level Detector & Auto-Drain System

This project demonstrates a dual-approach system to monitor and manage water levels in a tank. It includes:

- 🧠 **With Arduino** — real-time sensing and pump control
- ⚙️ **Without Arduino** — display-based logic using ICs

---

## 📌 Project Objective

To monitor water levels using 7 metal probes and automatically drain water when it reaches a critical level. The system helps avoid overflow, automate drainage, and visualize the tank level.

---

## 🧰 Apparatus

### With Arduino:
- Arduino Uno
- 7 Metal Probes (including GND)
- Relay Module (5V)
- Submersible DC Pump
- Jumper Wires, Breadboard
- USB Cable (for programming)
- External Power Source (for pump)

### Without Arduino:
- 74HC147 (Decimal to BCD Encoder)
- 74HC04 (Hex Inverter)
- CD4511 (BCD to 7-Segment Decoder)
- 7-Segment Display (Common Cathode)
- Transistors (NPN), Resistors (1kΩ, 560kΩ, 100Ω), Capacitors (0.1µF)
- 9V Battery
- Voltage Regulator (7805)
- Breadboard & Jumpers
- 7 Metal Probes (including GND)
- Submersible DC Pump
- Relay (for pump switching)

---

## 🔧 System Working

### 1. Without Arduino

- Probes are placed vertically inside the water tank.
- Water completes the circuit through each probe as it rises.
- IC 74HC147 converts the highest active probe into BCD format.
- The BCD signal is inverted using 74HC04 and sent to CD4511.
- CD4511 drives the 7-segment display to show water level.
- A relay + transistor combination can trigger the pump when level = 7.

📷 **Circuit Diagram:**
<img width="731" height="338" alt="Screenshot 2025-07-20 222358" src="https://github.com/user-attachments/assets/4f91b7fb-a8cb-46c9-8cf4-e3e8514d62ef" />


---

### 2. Smart Method (With Arduino)

- Probes act as level indicators connected to Arduino digital pins.
- Arduino reads which probes are submerged and counts the active ones.
- If water level ≥ 5, the Arduino activates the relay, powering the pump.
- When water drops below level 5, the pump shuts off.

📷 **Circuit Diagram:**
)

---

## 💡 Features

- 7-Level Monitoring
- Real-Time Display (7-Segment / Serial Monitor)
- Automatic Pump Control via Relay
- Two Modes: Low-Cost Manual or Smart IoT-Ready
- Modular: Can be upgraded for IoT/remote sensing

---

## 🛠 Applications

- Household Water Tank Management
- Drainage Monitoring Systems
- Industrial Fluid Overflow Prevention
- Smart Irrigation Systems

---

## ✅ Conclusion

This project provides both an intelligent and a cost-effective method for managing water levels. Whether you're building a simple circuit or a programmable system, this solution is adaptable for home or industry.

---

## 📁 Suggested Directory Structure

