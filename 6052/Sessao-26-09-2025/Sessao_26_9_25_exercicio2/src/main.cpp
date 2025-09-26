#include <Arduino.h>
// definir pino do led
const int Pinled = 7;
//definir pino do botao
const int Pinbotao = A0;

void setup ()
{
// ligar  monitor serial
 Serial.begin(115200);
// deifinir pino led como saída
 pinMode (Pinled, OUTPUT);
//definir pino botao como entrada
 pinMode (Pinbotao, INPUT);

}

void loop ()
{
//ler o botão no monitor serial
  Serial.println(digitalRead(Pinbotao));
  //esperar 1 s
  delay(1000);
  //ligar o led
  digitalWrite (Pinled, HIGH);
  //esperar 1 s ligado
  delay(1000);
 //desligar o led
  digitalWrite (Pinled, LOW);
 //esperar 1 s desligado
  delay(1000); 
}


