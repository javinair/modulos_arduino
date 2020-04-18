# Módulos Arduino
Repositorio con ejemplos de cada uno de los módulos para Arduino

## Listado

[Sensor de temperatura](https://github.com/javinair/modulos_arduino#sensor-de-temperatura)



## Sensor de temperatura (**DHT11**)

### Modelo
<img src="https://github.com/javinair/modulos_arduino/blob/master/DHT11/res/sensor.jpg" height="200px">

### Esquema
DHT11/22 (4 pines) | Arduino
:-------------: |:-------------:
Pin 1      | 5V |
Pin 2      |5V via **resistencia 10KΩ** y pin digital 2|
Pin 3 | *No conectado*
Pin 4 |GND|

DHT11 (3 pines) | Arduino
:-------------: |:-------------:
S      | Pin digital 2 |
\+      | 5V|
\- |GND |

### Conexión
![Conexión](https://github.com/javinair/modulos_arduino/blob/master/DHT11/res/conexion.png)

### Librerías
- [Adafruit Unified Sensor v1.1.2](https://github.com/adafruit/Adafruit_Sensor)
- [DHT sensor library v1.3.8](https://github.com/adafruit/DHT-sensor-library)