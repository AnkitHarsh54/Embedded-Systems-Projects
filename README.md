# Embedded Systems Projects – Home Automation

This repository contains two practical **embedded systems projects** designed to solve common home automation problems using electronic circuits and microcontrollers.

The projects demonstrate how **sensors, logic circuits, and microcontrollers** can be used to create low-cost and reliable automation systems.

## Projects Included

1. Fridge Door Alarm System
2. Water Level Detector and Auto-Drain System

---

# 1. Fridge Door Alarm System

## Objective

Design a system that detects when a refrigerator door is left open and generates an alarm after a delay to prevent energy loss and food spoilage.

## Components

* LDR (Light Dependent Resistor)
* 555 Timer IC (Monostable Mode)
* 555 Timer IC (Astable Mode)
* Resistors and Capacitors
* Buzzer
* Diode
* 9V Battery
* ESP32 (Alternative microcontroller implementation)

## Working Principle

1. The LDR is placed inside the refrigerator near the door.
2. When the door opens, light falls on the LDR and its resistance decreases.
3. This triggers a **monostable timer** that starts a delay of approximately **30 seconds**.
4. If the door remains open after the delay, an **astable timer activates the buzzer**.
5. When the door is closed, the light disappears and the alarm resets automatically.

## Alternative Implementation Using ESP32

Instead of analog timers, the system can also be implemented using **ESP32**:

* LDR connected to ESP32 input
* Microcontroller detects light intensity
* After the delay period, ESP32 triggers a buzzer

This version allows easier modification of delay time and additional smart features.

## Applications

* Home refrigerators
* Cold storage units
* Industrial refrigeration systems

---

# 2. Water Level Detector and Auto-Drain System

## Objective

Monitor the water level in a tank and automatically activate a pump to drain excess water when the level exceeds a safe threshold.

## Implementation Methods

Two implementations were developed:

1. Logic IC based system (without microcontroller)
2. Microcontroller based system using Arduino

---

## Implementation 1 – Logic IC Based System

### Components

* 74HC147 Priority Encoder
* 74HC04 Inverter
* CD4511 BCD to 7-Segment Decoder
* 7-Segment Display
* Water level probes
* Resistors
* Relay
* Pump

### Working

* Probes are placed at different heights in the water tank.
* When water reaches a probe, it completes an electrical path.
* The **priority encoder identifies the highest active probe**.
* The signal is decoded and displayed on the **7-segment display**.
* When the water level crosses the threshold, a **relay activates the pump** to drain excess water.

---

## Implementation 2 – Arduino Based System

### Components

* Arduino Uno
* Water level probes (7 levels)
* Relay module
* Submersible pump
* Jumper wires and resistors

### Working

* Each probe is connected to a digital input pin of the Arduino.
* The Arduino continuously reads the probe signals.
* The current water level is printed in the **Serial Monitor**.
* If the water level exceeds the defined limit (level ≥ 5), the **relay is activated** and the pump starts draining water.

---

# Applications

| Project              | Applications                                                |
| -------------------- | ----------------------------------------------------------- |
| Fridge Door Alarm    | Home refrigerators, cold storage monitoring                 |
| Water Level Detector | Overhead tanks, sewage systems, industrial water monitoring |

---


# Conclusion

These projects illustrate how **simple electronics components and microcontrollers** can be used to build efficient automation systems for everyday problems. The designs are **low-cost, scalable, and practical**, making them suitable for home automation and industrial monitoring applications.
