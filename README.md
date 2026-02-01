## Tutoriels Arduino

Dans l'IDE Arduino, choisir Arduino AVR Boards, Arduino UNO.

+ tuto-1 : Faire clignoter une LED
+ tuto-2 : Faire varier la luminosité d'une LED
+ tuto-3 : Observer la tension et l'intensité
+ tuto-4 : Simuler un feu de signalisation tricolore
+ tuto-5 : Faire sonner une alarme
+ tuto-6 : Mesurer la luminosité
+ tuto-7 : Allumer une LED multicolore
+ tuto-8 : Mesurer la température et l'humidité avec un DHT11
+ tuto-9 : Utiliser un afficheur 7 segments
+ tuto-10 : Utiliser un afficheur 7 segments et 4 digits
+ tuto-11 : Utiliser un afficheur LCD
+ tuto-12 : Utiliser une matrice led 8x8
+ tuto-13 : Mesurer la température, la pression et l'altitude avec un BMP280
+ tuto-14 : Mesurer la luminosité avec un TLS2591
+ tuto-15 : Utiliser un capteur de mouvement

## Ajout du user au group dialout

Pour télécharger des sketchs, il faut que le user qui lance l'IDE Arduino soit dans le groupe dialout. Sinon le téléchargement provoque un permission denied sur le port de l'Arduino.

```
sudo usermod -aG dialout $USER
```

## Retailler les photos utiisées

Commande pour retailler la photo.

```bash
$ sudo apt-get install imagemagick
```

```bash
$ mv tuto-3_bb.jpg tuto-3_bb_.jpg 
$ convert tuto-3_bb_.jpg -resize 30% tuto-3_bb.jpg 
$ rm tuto-3_bb_.jpg
```

