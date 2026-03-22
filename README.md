🚗 Obstacle Avoidance Car using Arduino

1. Introduction
An Obstacle Avoidance Car is an intelligent robotic vehicle that can detect obstacles in its path and navigate automatically without human control.
This project uses an Arduino microcontroller, ultrasonic sensor, servo motor, and motor driver to build a smart and autonomous system.

2. Objectives
- To design an autonomous robot
- To understand sensor-based navigation
- To learn Arduino programming and motor control
- To build a real-world automation system

3. Working Principle
The robot works on the principle of Ultrasonic Distance Measurement.

Step-by-step Working:
↓
Robot moves forward continuously
↓
Ultrasonic sensor sends sound waves
↓
IF obstacle detected within 30 cm THEN
    Stop
    Move Backward
    Rotate Servo (Left & Right)
    Measure distance in both directions
    Compare distances
    Turn in safer direction
ELSE
    Continue moving forward
↓
Repeat

4. Components Required
- Arduino UNO
- Ultrasonic Sensor (HC-SR04)
- Servo Motor (SG90)
- L298N Motor Driver
- DC Motors (2)
- Robot Chassis
- Wheels (2)
- Battery Pack
- Jumper Wires

5. Circuit Connections

Ultrasonic Sensor:
VCC → 5V
GND → GND
TRIG → Pin 5
ECHO → Pin 6

Servo Motor:
VCC → 5V
GND → GND
Signal → Pin 3

Motor Driver (L298N):

Left Motor:
IN1 → Pin 7
IN2 → Pin 8

Right Motor:
IN3 → Pin 9
IN4 → Pin 10

Power:
Battery (+) → 12V (L298N)
Battery (-) → GND
Arduino GND → L298N GND (Common Ground)

6. Software Used
- Arduino IDE
- Embedded C (Arduino Programming)

7. Algorithm
START
↓
Move Forward
↓
Measure Distance
↓
IF Distance ≤ 30 cm THEN
    Stop
    Move Backward
    Scan Left and Right
    Compare Distances
    Turn in Safer Direction
ELSE
    Continue Forward
↓
Repeat

8. Real-World Applications
- Autonomous Robots
- Self-Driving Car Models
- Industrial Automation Systems
- Smart Delivery Robots
- Hospital Service Robots
- Agricultural Robots

9. Advantages
- Simple and low-cost
- Easy to build
- Fully autonomous
- Beginner-friendly project

10. Limitations
- Limited sensing range
- Cannot detect transparent objects
- Accuracy affected by environment
- No path memory

11. Future Scope
- Add Bluetooth / Mobile Control
- Upgrade to ESP32 (IoT)
- Add Camera for vision
- Implement AI Navigation
- Add GPS tracking

12. Conclusion
The Obstacle Avoidance Car is a simple and powerful robotics project that demonstrates autonomous system behavior.
It helps in understanding sensors, microcontrollers, and motor control, forming a strong base for advanced robotics and IoT projects.
