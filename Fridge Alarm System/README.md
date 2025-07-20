# 🧊 Fridge Door Alarm using 555 Timer and LDR

A simple, low-cost circuit that alerts users if a fridge door remains open for too long. Built using two NE555 timer ICs and an LDR, this project helps save electricity and keep food fresh by providing a sound alert after a delay.

---

## 🔍 Project Overview

Many people accidentally leave the fridge door open, causing energy waste and food spoilage. This circuit senses light entering the fridge via an LDR and, after a delay (set via a monostable 555 timer), triggers a buzzer through a second 555 timer in astable mode.

---

## 🧩 Components Used

| Component         | Description                  | Qty |
|------------------|------------------------------|-----|
| NE555 Timer IC    | Timer IC (monostable + astable) | 2   |
| LDR              | Light-dependent resistor      | 1   |
| Resistors        | 10kΩ, 150kΩ, 470kΩ, 100Ω      | 4   |
| Capacitors       | 47µF, 0.1µF                   | 2   |
| Diode            | 1N4007                        | 1   |
| Buzzer           | 5V piezo buzzer               | 1   |
| Battery          | 9V                            | 1   |
| Breadboard & Jumper Wires | For prototyping      | -   |

---

## ⚙️ Working Principle

- **LDR** detects light when the door is open.
- **IC1 (Monostable 555 Timer):** Adds ~30 sec delay when light is detected.
- **IC2 (Astable 555 Timer):** Activates buzzer until the door is closed.
- **Cycle resets** when the fridge is closed and light is blocked.

---

## 🛠 Build Steps

1. Place two NE555 timers on a breadboard.
2. Configure LDR in a voltage divider with a 10kΩ resistor.
3. Connect divider output to **IC1's** trigger (monostable).
4. Connect **IC2** in astable mode to drive the buzzer.
5. Power the circuit using a 9V battery.
6. Expose LDR to light to simulate door open — buzzer activates after delay.
7. Cover LDR to simulate door closed — buzzer stops.

---

## 🔊 Applications

- Home refrigerators to prevent energy waste.
- Cold storage alert systems.
- Light-triggered safety alarms.

---

## ✅ Result

The system successfully triggers an alarm only if the fridge door remains open for over 30 seconds and resets immediately when the door is closed.

---

## 📌 Conclusion

This project demonstrates the practical use of 555 timers in monostable and astable configurations with basic sensors to solve real-life automation problems affordably and effectively.
