#include <Servo.h>

int servoPin = 9;
Servo servo;
int angle = 0;

void setup() {
  // put your setup code here, to run once:
  servo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (angle = 0; angle <180; angle+=10){
    servo.write(angle);
    delay(50);
  }
  for (angle = 180; angle >0; angle-=10){
    servo.write(angle);
    delay(50);
  }
}
