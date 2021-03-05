#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("hello, world!");
}

void loop() {
  lcd.setCursor(0, 1); // Place le curseur en colonne 0, ligne 1 (deuxième ligne).
  lcd.print(millis()/1000); // Ecrit le nombre de secondes depuis le lancement du sketch.
}
