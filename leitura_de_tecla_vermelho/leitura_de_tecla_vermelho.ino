/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 4 - Pressione e Brilhe: Explorando Interação com Botões e LEDs
    Descrição:Neste exemplo vamos  criar um painel onde deve incluir um botão que ao
    pressionar, acenderá o led vermelho.
*/


const int led_vermelho = 14; //pino para acionar led vermelho
const int bt1 = 7; //pino para o botão
int val = 0; // val será utilizado para armazenar o estado do pino

void setup(){
  pinMode(led_vermelho,OUTPUT); //configura o led vermelho como saída
  pinMode(bt1,INPUT_PULLUP); //configura o botão como entrada
}
void loop (){
val = digitalRead(bt1); // lê e armazena o valor de entrada
digitalWrite(led_vermelho, !val); //aciona led vermelho conforme valor lido no botão
}
