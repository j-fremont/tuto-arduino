int buzzer=4; // On utilise la sortie 4

void setup()
{
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  unsigned char i;
  
  while(1)
  {
    for(i=0;i<100;i++) // Une fréquence de son
    {
      digitalWrite(buzzer, HIGH); // Son
      delay(1); // Delay 1ms
      digitalWrite(buzzer, LOW); // Arrêt
      delay(1); // Delay 1ms
    }
    for(i=0;i<50;i++) // Une autre fréquence de son
    {
      digitalWrite(buzzer,HIGH); // Son
      delay(2); // Delay 2ms
      digitalWrite(buzzer,LOW); // Arrêt
      delay(2); // Delay 2ms
    }
  }
}
