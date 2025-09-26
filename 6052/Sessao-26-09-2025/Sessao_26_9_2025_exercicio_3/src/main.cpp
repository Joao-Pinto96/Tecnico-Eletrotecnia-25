#include <Arduino.h>

// definir pino do led
const int Pinled = 7;
//definir pino do botao
const int Pinbotao = A0;

void setup ()
{
// ligar  monitor serial
 Serial.begin(115200);
// definir pino led como saída
 pinMode (Pinled, OUTPUT);
//definir pino botao como entrada
 pinMode (Pinbotao, INPUT);
 Serial.begin(115200);

}

void loop ()
{

Serial.println(digitalRead(Pinbotao));
  // se o botão estiver pressionado entao:
  if(digitalRead(Pinbotao) == LOW)
  {
    //liga o led
    digitalWrite (Pinled, HIGH);
  }
  //senão
  else
  {
   //desliga o led
    digitalWrite (Pinled, LOW);

   
  }
}