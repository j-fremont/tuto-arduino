int ledRed=10;
int ledYellow=7;
int ledGreen=4;

void setup() {
  pinMode(ledRed, OUTPUT);
  pinMode(ledYellow, OUTPUT);
  pinMode(ledGreen, OUTPUT);
}

void loop() {
  digitalWrite(ledRed, HIGH); // Allume feu rouge
  delay(6000); // Attend 6s
  digitalWrite(ledRed, LOW); // Eteind feu rouge

  digitalWrite(ledGreen, HIGH); // Allume feu vert
  delay(8000); // Attend 8s
  digitalWrite(ledGreen, LOW); // Eteind feu vert

  digitalWrite(ledYellow, HIGH); // Allume feu orange
  delay(3000); // Attend 3s
  digitalWrite(ledYellow, LOW); // Eteind feu orange
}
