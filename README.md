🚗 Obstacle Avoidance Car using Arduino
📌 1. Introduction

An Obstacle Avoidance Car is an intelligent robotic vehicle that can detect obstacles in its path and navigate automatically without human control.

This project uses an Arduino microcontroller, ultrasonic sensor, servo motor, and motor driver to build a smart and autonomous system.

🎯 2. Objectives
To design an autonomous robot
To understand sensor-based navigation
To learn Arduino programming and motor control
To build a real-world automation system
🧠 3. Working Principle

The robot works on the principle of Ultrasonic Distance Measurement.

Step-by-step Working:
The robot moves forward continuously
The ultrasonic sensor sends sound waves
If an obstacle is detected within 30 cm:
Robot stops
Moves backward
Servo motor rotates sensor to left and right
Distance is measured in both directions
Robot chooses the direction with more space
Continues moving
🧰 4. Components Required
Component	Quantity
Arduino UNO	1
Ultrasonic Sensor (HC-SR04)	1
Servo Motor (SG90)	1
L298N Motor Driver	1
DC Motors	2
Robot Chassis	1
Wheels	2
Battery Pack	1
Jumper Wires	As required
🔌 5. Circuit Connections
🔹 Ultrasonic Sensor (HC-SR04)
VCC → 5V
GND → GND
TRIG → Arduino Pin 5
ECHO → Arduino Pin 6
🔹 Servo Motor (SG90)
Red (VCC) → 5V
Brown (GND) → GND
Orange (Signal) → Arduino Pin 3
🔹 Motor Driver (L298N)
Left Motor:
IN1 → Pin 7
IN2 → Pin 8
Right Motor:
IN3 → Pin 9
IN4 → Pin 10
🔋 Power Connections
Battery (+) → L298N 12V
Battery (–) → GND
Arduino GND → L298N GND (Common Ground Required)
⚙️ 6. Software Used
Arduino IDE
Embedded C / Arduino Programming
💻 7. Algorithm
Start system
Move forward
Measure distance
IF distance ≤ 30 cm:
Stop
Move backward
Scan left and right
Compare distances
Turn in safer direction
ELSE continue forward
Repeat
🚀 8. Real-World Applications
🤖 Autonomous robots
🚗 Self-driving car basic model
🏭 Industrial automation
🛒 Smart delivery robots
🚑 Hospital service robots
🌾 Agricultural robots
⚠️ 9. Advantages
Simple and low-cost
Easy to build and understand
Fully autonomous system
Useful for beginners in robotics
❌ 10. Limitations
Limited sensing range
Cannot detect transparent objects
Accuracy affected by environment
No memory or path planning
🔮 11. Future Scope
Add Bluetooth or mobile control
Upgrade to ESP32 for IoT
Add camera for vision detection
Implement AI-based navigation
Add GPS for tracking
📊 12. Conclusion

The Obstacle Avoidance Car is a simple yet powerful robotics project that demonstrates the concept of autonomous systems. It provides practical knowledge of sensors, microcontrollers, and motor control, making it a strong foundation for advanced robotics and IoT projects.
