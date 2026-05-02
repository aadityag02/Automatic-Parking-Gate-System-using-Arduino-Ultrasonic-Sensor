# Automatic Parking Gate System

This project demonstrates an **automated parking gate system** using Arduino, designed to operate without human intervention. The system detects an approaching vehicle and automatically opens and closes the gate.

---

##  Components Used
- Arduino Uno
- Ultrasonic Sensor (HC-SR04)
- Servo Motor
- LEDs (Red & Green)
- Jumper Wires
- Resistors

---

##  Working Principle
- The ultrasonic sensor continuously measures the distance of an approaching object.
- When a vehicle is detected within a predefined range (~3–5 cm):
  - The gate opens using a servo motor
  - Green LED turns ON (gate open signal)
- After a delay:
  - The gate closes automatically
  - Red LED turns ON (gate closed signal)

---

##  Features
- Fully automated gate operation
- Real-time vehicle detection
- Visual status indication using LEDs
- Low-cost and simple design

---

##  Results
- Accurate vehicle detection using ultrasonic sensing
- Smooth and reliable gate movement
- Minimal delay between detection and response
