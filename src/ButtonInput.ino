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