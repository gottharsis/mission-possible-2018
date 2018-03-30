#include <Servo.h>
#define THRESHOLD 200
#define PIN 0

Servo servo;
bool actionComplete = false;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  servo.attach(2); //attach servo to digital pin 2
  servo.write(90);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!actionComplete && analogRead(PIN) >= 200) {
    servo.write(0); //change to 180 for opposite direction;
    actionComplete = true; //ensures that it only runs once; you can press reset to reset the whole thing.
  }
}
