
#  LED Alternating Pattern using Embedded C 

---

##  Project Overview

This project demonstrates an **alternating LED pattern** implemented using **Embedded C** on an AVR microcontroller.
Multiple LEDs connected to PORTD pins toggle in two groups, creating an alternating lighting sequence.

The project helps in understanding **GPIO configuration**, **register-level programming**, and **digital output control** in embedded systems.

---

##   Hardware Requirements

* AVR Microcontroller (ATmega328P / ATmega16 / ATmega32)
* 6 LEDs
* 220Ω Current Limiting Resistors
* Breadboard
* Connecting Wires
* Power Supply / USB Programmer

---

##   Software Requirements

* Microchip Studio / Atmel Studio
* AVR-GCC Compiler
* Proteus Simulator (Optional)

---

##   Circuit Connection

| LED Group | Microcontroller Pin | Description |
| --------- | ------------------- | ----------- |
| LED 1     | PD2                 | Group A     |
| LED 2     | PD3                 | Group B     |
| LED 3     | PD4                 | Group A     |
| LED 4     | PD5                 | Group B     |
| LED 5     | PD6                 | Group A     |
| LED 6     | PD7                 | Group B     |

**Connection Method**

* LED **Anode (+)** → PORTD Pins (PD2–PD7)
* LED **Cathode (−)** → 220Ω Resistor → GND

---

##   Working Principle

1. PORTD pins **PD2–PD7** are configured as OUTPUT using the DDRD register.
2. LEDs are divided into two groups:

   * **Group A:** PD2, PD4, PD6
   * **Group B:** PD3, PD5, PD7
3. Group A LEDs turn ON while Group B remains OFF.
4. After 500 ms delay, the pattern switches.
5. The sequence repeats continuously inside an infinite loop.

---

##  Project Structure

```
led-alternating-pattern-embedded-c/
│
├── main.c        # Embedded C source code
├── README.md     # Project documentation

```

---

##  Expected Output

LEDs connected to PORTD generate an **alternating blinking pattern**, where:

* Group A LEDs turn ON
* Group B LEDs turn OFF
* Pattern switches every **500 ms**

---

##  Learning Outcomes

* Understanding GPIO configuration in AVR
* Register-level hardware control
* LED interfacing with microcontrollers
* Basic embedded firmware development

---

##

---

