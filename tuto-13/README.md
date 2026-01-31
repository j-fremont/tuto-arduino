## Mesurer la température, la pression et l'altitude avec un BMP280

Pas de schéma Fritzing car connecter simplement les bornes I2C et Vcc + Gnd.
+ SDA Arduino - SDA BMP280
+ SCL Arduino - SCL BMP280
+ Gnd Arduino - Gnd BMP280
+ 3.3V Arduino - Vcc BMP280

Lancer scannerI2C poour trouver quelle est l'adresse I2C du BMP280 connecté à l'Arduino.

Reporter l'adresse dans le bmp.begin().
