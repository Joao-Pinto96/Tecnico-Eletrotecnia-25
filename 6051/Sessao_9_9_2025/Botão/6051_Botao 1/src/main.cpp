#include <Arduino.h>

const int botaoPin = 2; // pino do botão
int estadoBotao = 0;

void setup() {
  pinMode(botaoPin, INPUT_PULLUP); // ativa resistor pull-up interno
  Serial.begin(9600);
  Serial.println("Teste de botao iniciado...");
}

void loop() {
  estadoBotao = digitalRead(botaoPin);

  if (estadoBotao == LOW) {
    // LOW significa pressionado (pois está ligado ao GND)
    Serial.println("Botao pressionado!");
  } else {
    Serial.println("Botao solto.");
  }

  delay(300); // atraso para não poluir o monitor serial
}