/*
    Autor(a): Diana Santos, Fábio Souza - Franzininho
    Data: 07/09/23
    Título: Exemplo 8 - Explorando o Touch
    Descrição: Neste exemplo vamos testar todos os touchs da placa, onde 
    perceberemos se está funcionando corretamente e enviando uma mensagem
    via monitor serial.
*/

#include "Arduino.h"

int threshold = 1500;   
bool touch2detectado = false;


void touch2() {
  touch2detectado = true; //função Touch 2 detectado
}

void touch3() {
  touch3detectado = true; // função Touch 3 detectado
}


void setup() {
  Serial.begin(115200);
  delay(1000); // tempo para abrir o monitor serial

  Serial.println("\n Franzininho Wifi LAB \n");
  touchAttachInterrupt(T2, touch2, threshold);
  touchAttachInterrupt(T3, touch3, threshold); 

}

void loop() {

  if (touch2detectado) {
    touch2detectado = false;
    if (touchInterruptGetLastStatus(T2)) {
        Serial.println("Touch2 pressionado"); // touch 2 pressionado
    } else {
        Serial.println("Touch2 solto"); // touch 2 solto
    }
  }

    if (touch3detectado) {
    touch3detectado = false;
    if (touchInterruptGetLastStatus(T3)) {
        Serial.println("Touch3 pressionado"); // touch 3 pressionado
    } else {
        Serial.println("Touch3 solto"); // touch 3 solto
    }
  }

  delay(80);
}
