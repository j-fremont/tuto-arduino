int luminosite = 0;

int taux = 5; // Quantité de luminosité qui change à chaque boucle

void setup() {
  pinMode(6, OUTPUT); // On choisit la sortie 6 de l'Arduino
}

void loop() {
  analogWrite(6, luminosite); // Ecriture de la valeur de la luminosité sur la sortie 6
  
  luminosite = luminosite + taux; // Changement de la luminosité avec le taux choisit
  
  if (luminosite <= 0 || luminosite >= 255) {
    taux = -taux ; // Si la luminosité atteint ses limites haute ou basse, change de le sens du taux
  }
  
  delay(30); // Attente 30ms
}
