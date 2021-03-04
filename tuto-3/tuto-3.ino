int ledPin=6; // On choisit la sortie 6 de l'Arduino

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
}
