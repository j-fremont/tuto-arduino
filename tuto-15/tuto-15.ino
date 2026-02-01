
void setup()  {
  Serial.begin(9600);
  pinMode(2, INPUT);
}

void loop() {

  int sensorValue = digitalRead(2);
  
  if (sensorValue == HIGH) {
    Serial.println("HIGH");
  } else {
    Serial.println("LOW");
  }

  delay(500);
}
