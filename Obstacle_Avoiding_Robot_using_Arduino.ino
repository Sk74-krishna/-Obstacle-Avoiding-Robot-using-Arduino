#include <Servo.h>

// Ultrasonic Pins
#define TRIG_PIN 5
#define ECHO_PIN 6

// Motor Pins
#define MOTOR_LEFT_FWD 7
#define MOTOR_LEFT_BWD 8
#define MOTOR_RIGHT_FWD 9
#define MOTOR_RIGHT_BWD 10

Servo myservo;

void setup() {
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(MOTOR_LEFT_FWD, OUTPUT);
  pinMode(MOTOR_LEFT_BWD, OUTPUT);
  pinMode(MOTOR_RIGHT_FWD, OUTPUT);
  pinMode(MOTOR_RIGHT_BWD, OUTPUT);

  myservo.attach(3);

  Serial.begin(9600);

  // Set servo to center position
  myservo.write(90);
  delay(500);
}

void loop() {
  long distance = getDistance();

  Serial.print("Forward Distance: ");
  Serial.println(distance);

  if (distance <= 30 && distance > 0) {
    stopMotors();
    delay(300);

    moveBackward();
    delay(350);
    stopMotors();
    delay(200);

    // Scan LEFT
    myservo.write(20);
    delay(500);
    long leftDistance = getDistance();
    Serial.print("Left Distance: ");
    Serial.println(leftDistance);

    // Center
    myservo.write(90);
    delay(300);

    // Scan RIGHT
    myservo.write(160);
    delay(500);
    long rightDistance = getDistance();
    Serial.print("Right Distance: ");
    Serial.println(rightDistance);

    // Back to center
    myservo.write(90);
    delay(300);

    // Decision making
    if (leftDistance > rightDistance) {
      turnLeft();
    } else {
      turnRight();
    }

  } else {
    moveForward();
  }
}

// 🔧 Correct Ultrasonic Function
long getDistance() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  long duration = pulseIn(ECHO_PIN, HIGH, 30000); // timeout

  long distance = duration * 0.034 / 2;

  // If no reading, return large value
  if (distance == 0) return 100;

  return distance;
}

// 🛑 Stop Motors
void stopMotors() {
  digitalWrite(MOTOR_LEFT_FWD, LOW);
  digitalWrite(MOTOR_LEFT_BWD, LOW);
  digitalWrite(MOTOR_RIGHT_FWD, LOW);
  digitalWrite(MOTOR_RIGHT_BWD, LOW);
}

// ⬆️ Move Forward
void moveForward() {
  digitalWrite(MOTOR_LEFT_FWD, HIGH);
  digitalWrite(MOTOR_LEFT_BWD, LOW);
  digitalWrite(MOTOR_RIGHT_FWD, HIGH);
  digitalWrite(MOTOR_RIGHT_BWD, LOW);
}

// ⬇️ Move Backward
void moveBackward() {
  digitalWrite(MOTOR_LEFT_FWD, LOW);
  digitalWrite(MOTOR_LEFT_BWD, HIGH);
  digitalWrite(MOTOR_RIGHT_FWD, LOW);
  digitalWrite(MOTOR_RIGHT_BWD, HIGH);
}

// ⬅️ Turn Left
void turnLeft() {
  digitalWrite(MOTOR_LEFT_FWD, LOW);
  digitalWrite(MOTOR_LEFT_BWD, HIGH);
  digitalWrite(MOTOR_RIGHT_FWD, HIGH);
  digitalWrite(MOTOR_RIGHT_BWD, LOW);
  delay(400);   // adjust if needed
  moveForward();
}

// ➡️ Turn Right
void turnRight() {
  digitalWrite(MOTOR_LEFT_FWD, HIGH);
  digitalWrite(MOTOR_LEFT_BWD, LOW);
  digitalWrite(MOTOR_RIGHT_FWD, LOW);
  digitalWrite(MOTOR_RIGHT_BWD, HIGH);
  delay(400);   // adjust if needed
  moveForward();
}