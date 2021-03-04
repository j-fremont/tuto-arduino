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
  delay(1000); // Attend 1s
  digitalWrite(ledRed, LOW); // Eteind feu rouge

  digitalWrite(ledYellow, HIGH); // Allume feu orange
  delay(200); // Attend 200ms
  digitalWrite(ledYellow, LOW); // Eteind feu orange

  digitalWrite(ledGreen, HIGH); // Allume feu vert
  delay(1000); // Attend 1s
  digitalWrite(ledGreen, LOW); // Eteind feu vert
}
