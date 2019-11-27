#include <Servo.h>
Servo servo1;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  int lightValue=analogRead(A0);
  lightValue=map(lightValue,0,1023,0,180);
  servo1.write(lightValue);
}
