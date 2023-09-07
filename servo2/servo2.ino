#include <ESP32Servo.h>

Servo servo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
int sw=13;
void setup() {
  servo.attach(5);
  pinMode(sw, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(sw)==LOW)
  {
  for(pos = 90; pos >= 0; pos -= 1)
   { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo.write(pos);  
    delay(15);           
  }
   delay(2000);     
  
  for  (pos = 0; pos <= 90; pos += 1) { 
    servo.write(pos);              
    delay(15);  
  }
  }
  else
  {
 
    servo.write(90);             
  }
  
  
}
