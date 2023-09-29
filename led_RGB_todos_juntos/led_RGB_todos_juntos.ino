/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 2 - Brilho Futurista: Criando Efeitos de Iluminação com LED RGB 
    Descrição:Neste exemplo vamos  criar uma luz de sinalização utilizando a cor 
    vermelha, verde e azul do LED RGB para piscar todos juntos em intervalos de um
    segundo.
*/
const int vermelho = 14;
const int verde = 13; 
const int azul= 12; 


void setup() {
  // configura o pino na cor vermelha, verde e azul como saída:
  pinMode(vermelho, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
}

void loop() {
 Vermelho();
 Verde();
 Azul();
}
  
void Vermelho() {
  // aciona o Led na cor vermelho:
  digitalWrite(vermelho, HIGH);
  delay(1000); // aguarda 1000ms 
  digitalWrite(vermelho, LOW);
  delay(1000); // aguarda 1000ms   
}
void Verde() {
  // aciona o Led na cor verde:
  digitalWrite(verde, HIGH);
  delay(1000); // aguarda 1000ms  
  digitalWrite(verde, LOW);
  delay(1000); // aguarda 1000ms 
}

void Azul() {
  // aciona o Led na cor azul:
  digitalWrite(azul, HIGH);
  delay(1000); // aguarda 1000ms 
  digitalWrite(azul, LOW);
  delay(1000); // aguarda 1000ms  
}
 
