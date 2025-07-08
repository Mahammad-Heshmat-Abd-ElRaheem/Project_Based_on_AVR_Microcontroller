# 🕒 Full-Optional Digital Clock with ATmega32

- This repository contains the source code and documentation for a **multi-mode digital clock** built with an **ATmega32 microcontroller**. The project was designed to demonstrate precision timekeeping, user interaction, and embedded system programming.
- 🎥 **Demo Video:** [Watch on LinkedIn]([https://www.linkedin.com/posts/your-post-id](https://www.linkedin.com/posts/mahammad-heshmat-abdel-raheem_embeddedsystems-avr-microcontrollers-activity-7114583005691588608-rW7E?utm_source=share&utm_medium=member_desktop&rcm=ACoAAD5R4y8B373FB7ekZS5GqdmdKkMOsfxAWNM))

## 📋 Features

✅ **4 Operating Modes:**
- **Normal Clock:** Displays current time
- **Alarm:** Configurable alarm with alert
- **Timer:** Countdown timer
- **Stopwatch:** Count-up stopwatch

✅ **Precise Timing:**
- Utilizes an **external 32.768 KHz crystal oscillator** for accurate 1-second intervals
- Configured Timer2 with a **1/128 prescaler** to generate overflow interrupts every second

✅ **User Interface:**
- **16×2 Character LCD** for display
- **Rotary Encoder** for parameter adjustment
- **Joystick** for navigation and mode selection

---

## ⚙️ Hardware Components

- **Microcontroller:** ATmega32
- **Crystal Oscillator:** 32.768 KHz
- **Display:** 16×2 LCD Module
- **Input Devices:**
  - Rotary Encoder
  - Joystick

---

## 🛠️ Tools & Environment

- **Development IDE:** Microchip Studio
- **Programming Language:** C
- **AVR Toolchain**

---

## 🧭 System Overview

**Timer Configuration:**
- **Timer2** connected to external oscillator (pins PC6 & PC7)
- **Prescaler:** 1/128
- **Overflow Interrupt:** triggers every 1 actual second

**Interface Workflow:**
- Navigate modes using the joystick
- Adjust time and parameters with the rotary encoder
- Visual feedback provided on the LCD

---

## 🗂️ Repository Contents

- `/src` – Source code files
- `/docs` – Schematics and documentation
- `README.md` – Project description

---

## 🚀 Getting Started

To build and flash the firmware:

1. Open the project in Microchip Studio.
2. Compile the code.
3. Upload to the ATmega32 using an AVR programmer.
4. Connect peripherals as per the schematic.

---

## 🎯 Project Goals

- Demonstrate accurate timekeeping on low-frequency crystal
- Build a flexible and intuitive user interface
- Practice embedded C and register-level configuration of timers

---

## 📸 Screenshots

*(Include photos of the assembled project here)*

---


