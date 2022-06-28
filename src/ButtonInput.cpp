/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "Particle.h"
#line 1 "/Users/darwinwang/Documents/IoT/ButtonInput/src/ButtonInput.ino"
void setup();
void loop();
#line 1 "/Users/darwinwang/Documents/IoT/ButtonInput/src/ButtonInput.ino"
SYSTEM_MODE(MANUAL);
SYSTEM_THREAD(ENABLED);

void setup() {
  pinMode(D2, INPUT);
  pinMode(D5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool buttonOnOff;
  buttonOnOff = digitalRead(D2);
  if (buttonOnOff == HIGH) {
    digitalWrite(D5, HIGH);
  } else {
    digitalWrite(D5, LOW);
  }            

}