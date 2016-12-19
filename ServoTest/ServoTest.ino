#include <Servo.h>

Servo myServo;
Servo myServo1;
void setup() {
  myServo.attach(9);
  myServo1.attach(8); 
  
}

void loop() {
 int sensor = analogRead(A0);
 int sensor1 = analogRead(A1);
 int angle = map(sensor, 0, 1023, 0,180);
 int angle1 = map(sensor1, 0, 1023, 0, 180);
  myServo.write(angle);
  myServo1.write(angle); 
}
