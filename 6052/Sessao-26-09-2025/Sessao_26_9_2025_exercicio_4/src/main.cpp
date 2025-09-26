#include <Arduino.h>

// definir pino do led
const int Pinled = 7;
//definir pino do botao
const int Pinbotao = A0;

void setup()
{
    Serial.begin(9600);


// definir pino led como saída
 pinMode (Pinled, OUTPUT);
// definir pino botao como entrada
pinMode (Pinbotao, INPUT);


}

int teste = 10;

void loop()
{
    if(teste)
    {
        Serial.println("Verdadeiro");
    }
    else
    {
        Serial.println("Falso");
    }
}




