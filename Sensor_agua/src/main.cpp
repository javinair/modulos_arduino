#include <Arduino.h>

int sensor; // Variable donde almacenará un dato de tipo entero

void setup()
{
  Serial.begin(9600); // Velocidad de comunicación a 9600 baudios
  pinMode(4, OUTPUT); // Se configura el pin 4 como salida
  pinMode(7, INPUT);  // Se configura el pin 7 como entrada
}

void loop()
{
  sensor = digitalRead(7); // Se lee el puerto 7 y se le asigna a sensor
  if (sensor == 1)
  {                        // Es verdadero cuando el sensor es igual a uno
    digitalWrite(4, HIGH); // El pin 4 se pone en estado alto
    Serial.println("Se ha movido");
  }
  else if (sensor == 0)
  {                       // Es verdadero cuando el sensor es igual a cero
    digitalWrite(4, LOW); // El pin 4 se pone en estado bajo
    Serial.println("Posicion inicial");
  }
}