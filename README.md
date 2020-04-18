# Módulos Arduino
Repositorio con ejemplos de cada uno de los módulos para Arduino

## Listado

- [Sensor de temperatura (DHT11)](https://github.com/javinair/modulos_arduino#sensor-de-temperatura-dht11)
- [Sensor de agua](https://github.com/javinair/modulos_arduino#sensor-de-agua)
- [Sensor de movimiento con mercurio (KY-027)](https://github.com/javinair/modulos_arduino#sensor-de-movimiento-con-mercurio-ky-027)



# Sensor de temperatura (**DHT11**)

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


# Sensor de agua

### Modelo
<img src="https://github.com/javinair/modulos_arduino/blob/master/Sensor_agua/res/sensor.jpg" height="200px">

### Esquema
Sensor | Arduino
:-------------: |:-------------:
S      | Pin analógico 0 |
\+      | 5V|
\- |GND |

### Conexión
![Conexión](https://github.com/javinair/modulos_arduino/blob/master/Sensor_agua/res/conexion.jpg)

### Librerías
*No requiere librería externa*


# Sensor de movimiento con mercurio (KY-027)

### Modelo
<img src="https://github.com/javinair/modulos_arduino/blob/master/Sensor_mov_mercurio_ky-027/res/sensor.jpg" height="200px">

### Esquema
Sensor | Arduino
:-------------: |:-------------:
G   | GND
V|5V
S|Pin digital 4
L|Pin digital 7

### Conexión
![Conexión](https://github.com/javinair/modulos_arduino/blob/master/Sensor_mov_mercurio_ky-027/res/conexion.jpg)

### Librerías
*No requiere librería externa*