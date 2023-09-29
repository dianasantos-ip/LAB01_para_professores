/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 4 - Pressione e Brilhe: Explorando Interação com Botões e LEDs
    Descrição: Neste exemplo, vamos criar um painel onde ao pressionar irá acender conforme:
    b1 = led vermelho
    b2 = led verde
    b3 = led azul
    b4 = led na cor roxa
*/

const int led_vermelho = 14; // Pino do LED vermelho
const int led_verde = 13;    // Pino do LED verde
const int led_azul = 12;     // Pino do LED azul
const int bt1 = 7;          // Pino do botão 1
const int bt2 = 6;          // Pino do botão 2
const int bt3 = 5;          // Pino do botão 3
const int bt4 = 4;          // Pino do botão 4

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_azul, OUTPUT);
  pinMode(bt1, INPUT_PULLUP);
  pinMode(bt2, INPUT_PULLUP);
  pinMode(bt3, INPUT_PULLUP);
  pinMode(bt4, INPUT_PULLUP);
}

void loop() {
  // Verificar o estado de cada botão e acionar os LEDs correspondentes

  if (digitalRead(bt1) == LOW) {
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_azul, LOW);
  } else if (digitalRead(bt2) == LOW) {
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde, HIGH);
    digitalWrite(led_azul, LOW);
  } else if (digitalRead(bt3) == LOW) {
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_azul, HIGH);
  } else if (digitalRead(bt4) == LOW) {
    // Aciona o LED roxo (vermelho + azul) quando o botão 4 é pressionado
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_azul, HIGH);
  } else {
    // Se nenhum botão for pressionado, desliga todos os LEDs
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_verde, LOW);
    digitalWrite(led_azul, LOW);
  }
}
