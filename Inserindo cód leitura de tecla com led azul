/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 4 - Pressione e Brilhe: Explorando Interação com Botões e LEDs
    Descrição: Neste exemplo, vamos criar um painel onde deve incluir um botão que ao
    pressionar, acenderá na cor roxa.
*/

// Definindo os pinos para o botão e as cores do LED RGB

const int vermelho = 14;
const int verde = 13;
const int azul = 12;
const int bt4 = 4;
int val = 0; // val será utilizado para armazenar o estado do pino

void setup() {
  // Configurando os pinos
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(bt4, INPUT_PULLUP);  // Configurando o botão com pull-up interno
}

void loop() {
  val = digitalRead(bt4); // lê e armazena o valor de entrada

  // Aciona o LED roxo (vermelho + azul) quando o botão é pressionado
  if (val == LOW) {
    digitalWrite(vermelho, HIGH);
    digitalWrite(azul, HIGH);
  } else {
    // Desliga os LEDs quando o botão não está pressionado
    digitalWrite(vermelho, LOW);
    digitalWrite(azul, LOW);
  }
}
