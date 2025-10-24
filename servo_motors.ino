#include <Servo.h>

int pos = 0;
  
Servo servo_9;
Servo servo_8;
Servo servo_7;

void setup()
{
  servo_9.attach(9, 500, 2500);
  servo_8.attach(8,500, 2500);
  servo_7.attach(7,500, 2500);
}

void loop()
{
  for(pos=0; pos<=180; pos+=1){
  	servo_9.write(pos);
    servo_8.write(pos+10);
    servo_7.write(pos+50);
    delay(15);
  }
  for(pos=180; pos>=0; pos-=1){
  	servo_9.write(pos);
    servo_8.write(pos+10);
    servo_7.write(pos+50);
    
    delay(15);
  }    
}
