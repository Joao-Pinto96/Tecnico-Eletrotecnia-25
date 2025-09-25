#include <Arduino.h>

void setup()
{
  
  pinMode (13, OUTPUT); // configurar o pin 13 como saída
  pinMode (12, OUTPUT); // configurar o pin 12 como saída
  pinMode (11,OUTPUT); // configurar o pin 11 como saída
} 

 
void loop ()
{
  digitalWrite (13, HIGH); // ligar o pin 13
  digitalWrite (12, HIGH); // ligar o pin 12
  digitalWrite (11, HIGH); // ligar o pin 11 
  delay (1000); // esperar 1 segundo
  digitalWrite (13, LOW); // desligar o pin 13
  digitalWrite (12, LOW); // desligar o pin 12
  digitalWrite (11, LOW); // desligar o pin 11
  delay(1000); // esperar 1 segundo
}