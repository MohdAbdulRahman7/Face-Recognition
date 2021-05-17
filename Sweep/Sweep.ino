#include <Servo.h> 
int servoPin = 9;
Servo Servo1;
char incomingBit; 
void setup() {
 
pinMode(servoPin, OUTPUT);     
Serial.begin(9600);
}

void loop() {
  
    if (Serial.available() > 0) {

 incomingBit = Serial.read();
    Serial.print("I received:  ");

    
if(incomingBit == 'Y' || incomingBit == 'y') {

             // Make servo go to 0 degrees 
  Servo1.write(0); 
  delay(500); 
 // Make servo go to 90 degrees 
   Servo1.write(90); 
 delay(1000); 
 // Make servo go to 180 degrees 
 Servo1.write(180); 
 delay(1000); 
 //exit(0);
            }
            else {
              digitalWrite(servoPin, LOW); 
            }
  }
}






   
 
