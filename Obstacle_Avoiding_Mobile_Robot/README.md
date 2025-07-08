# 🤖 Obstacle-Avoiding Mobile Robot with Dual ATmega32

This repository contains the code and documentation for an **autonomous obstacle-avoiding mobile robot**, enhanced with Bluetooth-based remote interruption using **two ATmega32 microcontrollers**.

---

## 🎥 Demo Video

[![Watch the demo](https://img.shields.io/badge/Demo-Video-blue)](https://lnkd.in/dFx3fxBT)

---

## 🛠️ Features

✅ **Autonomous Navigation**
- Continuously measures distance with an HC-SR04 ultrasonic sensor
- Detects obstacles and adjusts movement accordingly

✅ **Remote Stop Control**
- Bluetooth commands received via HC-06 module
- A secondary ATmega32 triggers interrupts to stop the robot immediately

✅ **User Feedback**
- Real-time status displayed on a 16×2 LCD module

---

## ⚙️ Components Used

- **2× ATmega32 Microcontrollers**
- **4× DC Brushed Motors**
- **2× L293D Motor Driver ICs**
- **HC-SR04 Ultrasonic Sensor**
- **Servo Motor** (rotates sensor for scanning)
- **HC-06 Bluetooth Module**
- **16×2 Character LCD Module**

---

## 🧭 System Overview

### Primary Microcontroller
- Reads ultrasonic distance
- Determines motion commands
- Drives the motors

### Secondary Microcontroller
- Listens for Bluetooth commands
- On receiving "stop," triggers an interrupt line to the primary microcontroller

---

## 🗂️ Repository Structure

- `/src` – Source code for both microcontrollers
- `/docs` – Schematics and system diagrams
- `README.md` – This file

---

## 🚀 Getting Started

1. Flash the firmware to each ATmega32.
2. Connect the hardware as shown in the schematic diagrams.
3. Pair the Bluetooth module with your smartphone.
4. Send commands (e.g., stop) via a Bluetooth terminal app.
5. Power up the robot to start autonomous navigation.

---

## 💡 Project Highlights

- Demonstrates multi-microcontroller cooperation
- Combines real-time sensing with remote control
- Uses interrupts for safety and immediate response

---

## 📸 Screenshots

*(Add photos of the assembled robot and LCD display)*

---

## 📄 License

This project is released under the MIT License. See [LICENSE](LICENSE) for details.

---

## 🙌 Acknowledgments

Thanks to the open-source AVR community and robotics enthusiasts who inspired this project.
