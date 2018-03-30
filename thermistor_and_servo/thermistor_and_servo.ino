#include <Servo.h>
#define THRESHOLD 470

Servo servo;
bool actionComplete = false;

void setup() {
  // put your setup code here, to run once:
  servo.attach(2); //attach Servo to Digital Output 2;
  servo.write(90);

}

void loop() {
  // put your main code here, to run repeatedly:
  //attach input to analog pin 0
  if (!actionComplete && analogRead(0) <= THRESHOLD) {
    servo.write(0); //change to 180 for opposite direction
    actionComplete = true; //only triggers once.
  }

}
