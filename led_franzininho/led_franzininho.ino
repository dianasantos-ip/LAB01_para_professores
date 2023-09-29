/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 1 - Desvendando a Luz: Criando um Sinalizador com LED
    Descrição: Neste exemplo vamos  criar uma luz de sinalização, 
    para isso vamos acionar o Led 21 da placa Franzininho Wifi,
    fazendo-o piscar em intervalos regulares 1 segundo.
*/

const int led = 21; // Pino digital onde o LED está conectado

void setup() {
  pinMode(led, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
  digitalWrite(led, HIGH); // Liga o LED
  delay(1000);                // Mantém ligado por 1 segundo
  digitalWrite(led, LOW);  // Desliga o LED
  delay(1000);                // Mantém desligado por 1 segundo
}
