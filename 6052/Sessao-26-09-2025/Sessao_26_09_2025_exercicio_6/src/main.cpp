#include <Arduino.h>

const int BAUD_RATE = 9600;

int temperatura_lida=10;
int temperatura_max=5;
int temperatura_min=1;

int estado_do_botao=0;

int botao_arranque_1=1;
int botao_arranque_2=1;

int sobrecarga=1;


void setup ()
{
  Serial.begin(BAUD_RATE);

}
 

void loop ()
{
  if(temperatura_lida > temperatura_max)
  {
    Serial.println("ligar ventoinha");
  }
  else
  {
    Serial.println("desligar ventoinha");
  } 
  
    if(temperatura_lida < temperatura_min)
  {
    Serial.println("ligar esquentador");
  }
  else
  {
    Serial.println("desligar esquentador");
  }
  delay(1000);

   estado_do_botao = digitalRead(A0);
   if(estado_do_botao == LOW)

  {
    Serial.println("botao carregado");
  }
  else
  {
    Serial.println("botao nao esta carregado ");
  }

if(botao_arranque_1 && botao_arranque_2)
{
  Serial.println ("Liga maquina");
}
else
{
  Serial.println ("desliga maquina");
}

if(temperatura_lida > temperatura_max || sobrecarga)
{
  Serial.println("desliga emergencia");
}
else
{
  Serial.println("liga emergencia");
}
}
