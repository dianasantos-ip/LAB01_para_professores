/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 4 - Pressione e Brilhe: Explorando Interação com Botões e LEDs
    Descrição:Neste exemplo vamos  criar um painel onde deve incluir um botão que ao
    pressionar, acenderá na cor roxa.
*/

// Definindo os pinos para o botão e as cores do LED RGB

const int vermelho = 14;
const int verde = 13;
const int azul = 12;
const int bt4 = 4;

void setup() {
  // Configurando os pinos
  pinMode(vermelho, OUTPUT); //Configurando led vermelho como saída
  pinMode(verde, OUTPUT); //Configurando led verde como saída
  pinMode(azul, OUTPUT); //Configurando led azul como saída
  pinMode(bt4, INPUT_PULLUP);  // Configurando o botão com pull-up interno
  
}

void loop() {
  if (digitalRead(bt4);  // Acendendo a cor roxa
    delay(1000);  // Aguardando um segundo para evitar acionamentos múltiplos
  }
}

// Função para acender a cor roxa
void acenderCorRoxa() {
  analogWrite(vermelho, 128);  // Definindo vermelho como metade da intensidade
  analogWrite(verde, 0);       // Verde desligado
  analogWrite(azul, 128);      // Definindo azul como metade da intensidade
}
