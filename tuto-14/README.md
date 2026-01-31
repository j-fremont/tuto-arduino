## Mesurer la luminosité avec un TLS2591

Pas de schéma Fritzing car connecter simplement les bornes I2C et Vcc + Gnd.
+ SDA Arduino - SDA TLS2591
+ SCL Arduino - SCL TLS2591
+ Gnd Arduino - Gnd TLS2591
+ 3.3V Arduino - Vcc TLS2591

L'adresse I2C du TLS2591 semble être toujours 0x29 mais semble être en dur dans la librairie Adafruit.

Uploader scannerI2C pour être sûr, et en effet.

```
Périphérique i2c trouvé à l'adresse : 41 (0x29)
```
