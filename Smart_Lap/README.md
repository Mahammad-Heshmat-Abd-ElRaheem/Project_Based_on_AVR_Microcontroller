# 🚀 Smart Lab Access Control

A microcontroller-based access control system for laboratories, designed to secure entry with individual user IDs and passwords. The system manages authorized student access, tracks entries, and exits, and provides admin capabilities to monitor and configure users.   
🎥 **Demo Video:** [Link](https://drive.google.com/file/d/1C6aj4ZqyIqUCKxOG2lYy19SOpPkSU26Y/view?usp=drive_link)

---

## 📸 Screenshots

![SMART_LAB](https://github.com/user-attachments/assets/7cfdb2c9-f75c-4323-b915-f7bfb3ea0e25)    

[📄 View the Project Documentation](Smart_Lap/Docs/Documentation_of_the_Project.pdf)

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

## Documentations

The presentation describing the project is included in this repository directory.

---
