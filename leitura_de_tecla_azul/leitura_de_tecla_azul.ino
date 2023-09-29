/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 4 - Pressione e Brilhe: Explorando Interação com Botões e LEDs
    Descrição:Neste exemplo vamos  criar um painel onde deve incluir um botão que ao
    pressionar, acenderá o led azul.
*/


const int led_azul= 12; //pino para acionar led  azul
const int bt3 = 5; //pino para o botão
int val = 0; // val será utilizado para armazenar o estado do pino

void setup(){
  pinMode(led_azul,OUTPUT); //Configura o led azul como saída
  pinMode(bt3,INPUT_PULLUP); //Configura o botão como entrada
}
void loop (){
val = digitalRead(bt3); // lê e armazena o valor de entrada
digitalWrite(led_azul, !val); //aciona led  azul conforme valor lido do botão
}
