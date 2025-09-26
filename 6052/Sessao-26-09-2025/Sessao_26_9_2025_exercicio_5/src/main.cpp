#include <Arduino.h>

const int BAUD_RATE = 9600;

void setup ()
{
  Serial.begin(BAUD_RATE);

}
 

void loop ()
{
  if(digitalRead(A0) != HIGH)
  {
    Serial.println("Botão pressionado");
  }
  else
  {
    Serial.println("Botão não pressionado");
  }
  delay(1000);
}