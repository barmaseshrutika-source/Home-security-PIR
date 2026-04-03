# Home-security-PIR
An IoT-based home security system using Arduino and PIR sensor to detect motion and provide real-time alerts.

## 📌 Project Overview

This project is a simple Home Security System built using an Arduino Uno and a PIR (Passive Infrared) sensor.
It detects human motion and triggers an LED along with a message display on the Serial Monitor.

---

## 🎯 Objective

To design a basic security system that can detect motion and alert the user using an LED and serial output.

---

## 🧰 Components Used

* Arduino UNO
* PIR Motion Sensor
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

---

## 🔌 Circuit Connections

### PIR Sensor:

* VCC → 5V
* GND → GND
* OUT → Digital Pin 2

### LED:

* Positive (+) → Digital Pin 7
* Negative (–) → Resistor → GND

---

## ⚙️ Working Principle

The PIR sensor detects changes in infrared radiation caused by human movement.
When motion is detected, it sends a HIGH signal to the Arduino.
The Arduino then turns ON the LED and displays a message.

If no motion is detected, the LED remains OFF and the system shows "No Motion".

---

## 📺 Output

* Motion detected → LED ON + "Motion Detected"
* No motion → LED OFF + "No Motion"

---

## 🚀 Applications

* Home security systems
* Intruder detection
* Smart automation systems

---

## 📷 Project Preview

(Add your Wokwi circuit screenshot here)

---

## 👩‍💻 Author

Shrutika Barmase
IoT Internship Trainee

---

## 📌 Conclusion

This project demonstrates how sensors and microcontrollers can be used together to build simple real-time security systems.
