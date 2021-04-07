#include <Servo.h>

Servo servo;
int servoPin = 9;
int potentiometerPin = 1;

//angle의 변화가 있을 때만 write 명령을 수행하도록 하기 위한 변수
int lastAngle = 0;
char buffer[20];

void setup() {
  // put your setup code here, to run once:
  servo.attach(servoPin);
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(potentiometerPin);
  int angle = map(value,0,1023,0,179);
  
  sprintf(buffer,"%d / %d",lastAngle,angle);
  Serial.println(buffer);

  //angle을 측정할 때, 10번에 1번 꼴로 오차가 5씩 나타남
  //5보다 변화가 클때만 write를 수행하도록 함
  if (abs(lastAngle-angle)>5)
  {
    servo.write(angle);
    lastAngle = angle;
  }
  delay(15);
}
