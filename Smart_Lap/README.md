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
- **External EEPROM:** 2 KB
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
- The sum of the first 3 `FIN` elements yields a single 8-bit encoded password stored in EEPROM.

### 🚪 Entry & Exit Detection
- Two IR sensors detect movement sequence:
- Sensor 1 triggers before Sensor 2 → **entry**
- Sensor 2 triggers before Sensor 1 → **exit**

---

## 🧩 Software Tools

- **Development Environment:** Microchip Studio
- **Language:** C (AVR-GCC toolchain)

---

## ⚙️ Getting Started

### 🛠️ Build Instructions
1. Open the project in **Microchip Studio**.
2. Compile the code (`Build → Build Solution`).
3. Flash the generated HEX file to the ATmega32 using your preferred programmer (e.g., USBasp).

### 🧪 Usage
- Power on the system.
- Admin can add or remove members via the keypad.
- Users enter their obfuscated ID and password to unlock the door.
- Exit is triggered via the internal pushbutton.
- The system logs entry and exit events.

---

## 📷 Demo

The presentation describing the project is included in this repository directory.
**Video:** [https://drive.google.com/file/d/1C6aj4ZqyIqUCKxOG2lYy19SOpPkSU26Y/view?usp=drive_link]

---
