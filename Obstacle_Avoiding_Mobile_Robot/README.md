# 🤖 Obstacle-Avoiding Mobile Robot with Dual ATmega32

This repository contains the code and documentation for an **autonomous obstacle-avoiding mobile robot**, enhanced with Bluetooth-based remote interruption using **two ATmega32 microcontrollers**.     

🎥 **Demo Video:** [Watch on LinkedIn](https://www.linkedin.com/posts/mahammad-heshmat-abdel-raheem_embeddedsystems-robotics-avr-activity-7097922174895742976-lW6B?utm_source=share&utm_medium=member_desktop&rcm=ACoAAD5R4y8B373FB7ekZS5GqdmdKkMOsfxAWNM)

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
- Reads the distance the ultrasonic 
- Determines motion commands
- Drives the motors

### Secondary Microcontroller
- Listens for Bluetooth commands
- On receiving "stop," triggers an interrupt line to the primary microcontroller

---

