# 🧊 Fridge Door Alarm Project

This project alerts the user with a buzzer if the fridge door is left open for a certain amount of time. It helps conserve energy and ensures food safety. Two different approaches are demonstrated:




- **Approach 1:** 555 Timer IC + LDR (Pure hardware)
- **Approach 2:** ESP32 + LDR + Arduino Code (Smart microcontroller-based)

---

## 🚀 Project Objectives

- Prevent power loss due to open fridge doors
- Alert users with a buzzer after a set delay
- Demonstrate both analog and digital system design

---

# 🛠️ Approach 1: 555 Timer IC Based Fridge Alarm

### 📷 Circuit Diagram

<img width="500" height="350" alt="Screenshot 2025-07-20 194937" src="https://github.com/user-attachments/assets/4316dd14-8dbb-46d5-bb0e-1f22a7e36726" />

### ⚙️ Components

| Component       | Description                  | Quantity |
|----------------|------------------------------|----------|
| NE555 Timer IC | Monostable + Astable Mode    | 2        |
| LDR             | Light-dependent resistor     | 1        |
| Resistors       | 10kΩ, 150kΩ, 470kΩ, 100Ω     | 4        |
| Capacitors      | 47µF, 0.1µF                  | 2        |
| Diode           | 1N4007                       | 1        |
| Buzzer          | 5V Piezo buzzer              | 1        |
| Battery         | 9V                           | 1        |
| Breadboard & Wires | For prototyping           | As needed |

### ⏱️ Time Delay Calculation

**Monostable 555 Timer Formula:**

\[
T = 1.1*R*C
\]

Using:
- \( R = 470k\Omega \)
- \( C = 47\mu F \)

\[
T = 1.1*470000 *47 x 10^{-6} = \textbf{24.3 seconds}
\]

### ⚡ Working Principle

- LDR detects light from fridge interior
- Monostable 555 creates delay (~24s)
- If door stays open beyond that → triggers astable 555
- Astable 555 drives buzzer until door closes

### 🧪 Testing

- Close fridge door → LDR dark → No alarm
- Open fridge → Wait ~24s → Buzzer ON
- Close fridge → LDR dark again → Buzzer OFF

---

<img src="Fridge_Alarm.jpg" width="500"height="350" alt="Fridge Alarm Circuit">



# 🔁 Approach 2: ESP32 + Arduino Code

### 📷 Breadboard Setup

### ⚙️ Components

| Component       | Description                  | Quantity |
|----------------|------------------------------|----------|
| ESP32           | Wi-Fi-enabled microcontroller | 1        |
| LDR             | Light-dependent resistor     | 1        |
| Resistor        | 10kΩ                         | 1        |
| Buzzer          | Active buzzer                | 1        |
| Breadboard      | For circuit assembly         | 1        |
| Power           | USB / Li-ion Battery         | 1        |

### 🔌 Working

- LDR gives analog value to ESP32
- Code checks for brightness level
- If light persists for more than 30s, it activates buzzer
- Resets when door is closed








