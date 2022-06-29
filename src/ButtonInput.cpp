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
#define buttonRed D2
#define buttonGreen D3
#define buttonBlue D4
#define red D5
#define green D6
#define blue D7
#define potentiometer A5
bool changeRed = false;
bool changeGreen = false;
bool changeBlue = false;
void setup() {
  pinMode(buttonRed, INPUT);
  pinMode(buttonGreen, INPUT);
  pinMode(buttonBlue, INPUT);
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(potentiometer, INPUT);
  Serial.begin(9600);
}


void loop() {
  int buttonRed_OnOff = digitalRead(buttonRed);
  int buttonGreen_OnOff = digitalRead(buttonGreen);
  int buttonBlue_OnOff = digitalRead(buttonBlue);
  int bad_value = analogRead(potentiometer);
  int value = map(bad_value, 0, 4095, 0, 255);

  if (buttonRed_OnOff == HIGH) {
    changeRed = true;
    changeGreen = false;
    changeBlue = false;
  } 
  if (buttonGreen_OnOff == HIGH) {
    changeRed = false;
    changeGreen = true;
    changeBlue = false;
  }
  if (buttonBlue_OnOff == HIGH) {
    changeRed = false;
    changeGreen = false;
    changeBlue = true;
  }
  if (changeRed == true) {
    int rgbRed = value;
    analogWrite(red, rgbRed);
    Serial.println(rgbRed);
    delay(200);
  }
  if (changeGreen == true) {
    int rgbGreen = value;
    analogWrite(green, rgbGreen);
    Serial.println(rgbGreen);
    delay(200);
  }
  if (changeBlue == true) {
    int rgbBlue = value;
    analogWrite(blue, rgbBlue);
    Serial.println(rgbBlue);
    delay(200);
  }
  
  if (buttonRed_OnOff == HIGH && buttonGreen_OnOff == HIGH && buttonBlue_OnOff == HIGH) {
    analogWrite(red, 0);
    analogWrite(green, 0);
    analogWrite(blue, 0);
    changeRed = false;
    changeGreen = false;
    changeBlue = false;
    delay(1000);
  }  
}

