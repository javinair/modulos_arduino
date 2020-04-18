#include <Arduino.h>

const int pinZ = 2;
const int pinY = 1;
const int pinX = 0;

void setup()
{
  pinMode(pinZ, INPUT);
  digitalWrite(pinZ, HIGH);
  Serial.begin(115200);
}

void loop()
{
  Serial.print("Boton: ");
  Serial.println(digitalRead(pinZ));
  Serial.print("Eje X: ");
  Serial.println(analogRead(pinX));
  Serial.print("Eje Y: ");
  Serial.println(analogRead(pinY));
  delay(500);
}