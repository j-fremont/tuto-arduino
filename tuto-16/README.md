## Utiliser l'Arduino Ethernet shield

Pour l'Arduino ethernet shield.
+ Simplement inclure Ethernet.h.

Pour DHT11 (capteur d'humidité et température).
+ Aller sur https://github.com/adafruit/DHT-sensor-library et télécharger la librairie.
+ Télécharger également https://github.com/adafruit/Adafruit_Sensor.
+ Dézipper et copier ces deux librairies dans ~/arduino-1.8.5/libraries/.

Pour le client MQTT.
+ Lancer l'IDE Arduino et installer PubSubClient (dans Croquis/Inclure une bibliothèque/Gérer les bibliothèques, filtrer la recherche avec "MQTT").
+ Si besoin, un exemple de subscribe avec callback ici : http://www.rgot.org/mqtt-utilisation-avec-arduino/.
+ Et aussi : https://www.carnetdumaker.net/articles/utiliser-les-entrees-sorties-numeriques-dune-carte-arduino-genuino/.

Une alternative à MQTT et d'utiliser la librarie SPI pour une liaison serie (voir dans les exemples de l'Arduino Studio).
