/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 4 - Pressione e Brilhe: Explorando Interação com Botões e LEDs
    Descrição:Neste exemplo vamos  criar um painel onde deve incluir um botão que ao
    pressionar, acenderá o led verde.
*/

const int led_verde = 13; //pino para acionar led verde
const int bt2 = 6; //pino para o botão
int val = 0; // val será utilizado para armazenar o estado do pino

void setup(){
  pinMode(led_verde,OUTPUT); //Configura o led verde como saída
  pinMode(bt2,INPUT_PULLUP); //Configura o botão como entrada
}
void loop (){
val = digitalRead(bt2); // lê e armazena o valor de entrada
digitalWrite(led_verde, !val); //aciona led verde conforme valor lido do botão
}
