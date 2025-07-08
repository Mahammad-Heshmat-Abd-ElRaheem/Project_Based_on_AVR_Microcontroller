# 🚀 Smart Lab Access Control

A microcontroller-based access control system for laboratories, designed to secure entry with individual user IDs and passwords. The system manages authorized student access, tracks entries, and exits, and provides admin capabilities to monitor and configure users.

---

## ✨ Features

✅ Compact password encoding algorithm to save EEPROM memory  
✅ Admin panel with runtime management:  
- Add, delete, or update member records  
- Lock the lab to prevent entry  
- Count registered and present members  
- Retrieve logs of the last 12 entries  
✅ Direction detection with dual IR sensors for accurate entry/exit tracking  
✅ Local control via keypad and feedback through LCD and buzzer  

---

## 🛠️ Hardware Components

- **Microcontroller:** ATmega32
- **External EEPROM:** 2 KB (model e.g., 24C16)
- **IR Sensors:** 2 units for direction detection
- **16x2 LCD Display**
- **Stepper Motor:** For door actuation
- **ULN2003 Driver:** Stepper motor driver
- **4x4 Keypad:** User input
- **Buzzer:** Audio alarm
- **LEDs:** Entry/lock indication
- **Pushbuttons:** Exit and reset functions

---
Producing IDs in the range **1326–9962**.

### 🔑 Password Encoding
- Users enter an 8-character password (0–9, A–D).
- The ASCII values are split into two groups of 4 characters.
- For each index `t`:

## 🧠 How It Works

### 🎫 ID Generation
- Internally, IDs are sequential addresses in EEPROM (1–254).
- To obfuscate them, the system generates a public ID:
