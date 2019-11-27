#include <Servo.h>
Servo servo1;

void setup() {
  // put your setup code here, to run once:
  servo1.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:

  int lightValue=analogRead(A0);
  if(lightValue<=90)
  {
    lightValue=map(lightValue,0,90,90,90);
  }
  else if(lightValue>90)
  {
    lightValue=map(lightValue,0,1023,180,180);
  }
  
  servo1.write(lightValue);
}
