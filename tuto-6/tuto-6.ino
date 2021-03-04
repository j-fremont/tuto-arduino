int photocellPin = 2; // Sortie Analog de la photorésistance
int ledPin = 4; // Sortie Digital de la LED
int val = 0; // Valeur de la luminosité

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val = analogRead(photocellPin); // Lecture de la valeur de la luminosité
  Serial.println(val);
  if (val<=512) { // Si la valeur de la luminosité est basse...
    digitalWrite(ledPin, HIGH); // ...on eteint la LED.
  }
  else {
    digitalWrite(ledPin, LOW);
  }
}
