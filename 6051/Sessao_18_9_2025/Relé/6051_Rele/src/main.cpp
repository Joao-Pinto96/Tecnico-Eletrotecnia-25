#include <Arduino.h>

int R1 = 7;
int BT = A0;

int tempo ;

int ESTADO_ON = HIGH;
int ESTADO_OFF = LOW;

void setup() {
 pinMode(R1, OUTPUT);
 pinMode(BT,INPUT_PULLUP);
}

void loop() {
  

if(digitalRead(BT)== LOW){    
  tempo = 500;
  }
  else{ tempo =2000;
  }

//R1
digitalWrite(R1,ESTADO_ON);
delay(tempo);
digitalWrite(R1,ESTADO_OFF);
delay(tempo);
}