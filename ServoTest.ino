#include <Servo.h>

Servo myServo;
void setup() {
  myServo.attach(9);
}

void loop() {
 int sensor = analogRead(A0);
 int angle = map(sensor, 0, 1023, 0,
180);
  myServo.write(angle); 
}
