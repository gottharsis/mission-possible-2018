#define THRESHOLD 200

bool actionComplete = false;
void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT); // connect the dc in to pin 2
}

void loop() {
  // put your main code here, to run repeatedly:
  if (!actionComplete && analogRead(0) >= THRESHOLD) {
    digitalWrite(2, HIGH);
    delay(10000); //10000ms = 10 seconds
    digitalWrite(2, LOW); //turn off motor
    actionComplete = true; // ensure that it only triggers once
  }
}
