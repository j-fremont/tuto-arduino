## Mesurer la température et l'humidité avec un DHT11 

![Pictures/tuto-8_bb.jpg](https://github.com/j-fremont/tuto-arduino/blob/master/Pictures/tuto-8_bb.jpg)

Lors de la vérification du sketch, la librairie DHT11.h n'est pas reconnue par l'IDE Arduino. Il faut la charger : aller dans le menu Outils, faire Gérer les bilbliothèques. Dans le filtre de recherche, taper DHT11 et installer la librairie DHT sensor library.

![Pictures/dht-lib.png](https://github.com/j-fremont/tuto-arduino/blob/master/Pictures/dht-lib.png)

Pour voir les informations affichées par le sketch avec Serial.println(), aller dans l'IDE Arduino, menu Outils, choisir Moniteur série.

Les mesures sont un peu différentes entre le DHT11 4 PIN (sans board) et avec 3 MIN sur une board.

Sans board - 4 PIN.
```
Humidity: 51.00%  Temperature: 20.00°C 68.00°F  Heat index: 19.39°C 66.90°F
```

Avec board - 3 PIN.
```
Humidity: 51.00%  Temperature: 21.50°C 70.70°F  Heat index: 21.04°C 69.87°F
```

Il faut alimenter le DHT11 Waveshare (avec board) en 3,3V et l'autre (sans board) en 5V.
