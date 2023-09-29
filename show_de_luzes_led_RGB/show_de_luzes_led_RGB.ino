/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 3 - Show de Luzes: Criando Efeitos Incríveis com LED RGB
    Descrição:Neste exemplo vamos  criar uma luz de sinalização utilizando a cor 
    vermelha, verde e azul do LED RGB para piscar todos juntos em intervalos de
    100 milisegundos.
*/
const int vermelho = 14;
const int verde = 13; 
const int azul= 12; 


void setup() {
  pinMode(vermelho, OUTPUT);  // configura o pino na cor vermelha como saída:
  pinMode(verde, OUTPUT);   // configura o pino na cor verde e azul como saída:
  pinMode(azul, OUTPUT);  // configura o pino na cor azul como saída:
}

void loop() {
 Vermelho();
 Verde();
 Azul();
 Branco();
 Amarelo();
 Ciano();
 Magenta();
}
  
void Vermelho() {
  digitalWrite(vermelho, HIGH);  // Acende o Led na cor vermelha
  delay(100);  //Intervalo de 100 milisegundos
  digitalWrite(vermelho, LOW); // Apaga o led na cor vermelha 
  delay(100); //Intervalo de 100 milisegundos
}
void Verde() {
  digitalWrite(verde, HIGH); // Acende o Led na cor verde
  delay(100); //Intervalo de 100 milisegundos
  digitalWrite(verde, LOW); // Apaga o led na cor verde
  delay(100);//Intervalo de 100 milisegundos 
}

void Azul() {
  digitalWrite(azul, HIGH); // Acende o Led na cor azul
  delay(100); //Intervalo de 100 milisegundos 
  digitalWrite(azul, LOW); // Apaga o led na cor azul
  delay(100); //Intervalo de 100 milisegundos 
}

void Branco() {
  // aciona o Led na cor váriando para branco
  digitalWrite(azul, HIGH);//Coloca azul em nível alto
  digitalWrite(vermelho, HIGH);//Coloca vermelho em nível alto
  digitalWrite(verde, HIGH);//Coloca verde em nível alto, ligando-o
  delay(100);//Intervalo de 100 milisegundos
  digitalWrite(azul, LOW);//Coloca azul em nível baixo
  digitalWrite(vermelho, LOW);//Coloca vermelho em nível baixo
  digitalWrite(verde, LOW);//Coloca verde em nível baixo
  delay(100);//Intervalo de 100 milisegundos
}

void Amarelo() {
  // aciona o Led na cor váriando para amarelo
  digitalWrite(verde, HIGH);//Coloca verde em nível alto
  digitalWrite(vermelho, HIGH);//Coloca vermelho em nível alto
  delay(100); //Intervalo de 100 milisegundos
  digitalWrite(verde, LOW);//Coloca verde em nível baixo
  digitalWrite(vermelho, LOW);//Coloca vermelho em nível baixo
  delay(100); //Intervalo de 100 milisegundos
}

void Ciano() {
   // aciona o Led na cor váriando para ciano
  digitalWrite(verde, HIGH);//Coloca verde em nível alto
  digitalWrite(azul, HIGH);//Coloca azul em nível baixo alto
  delay(100); //Intervalo de 100 milisegundos
  digitalWrite(verde, LOW);//Coloca verde em nível baixo
  digitalWrite(azul, LOW);//Coloca azul  em nível baixo
  delay(100); //Intervalo de 100 milisegundos
}

void Magenta() {
  // aciona o Led na cor váriando para magenta
  digitalWrite(azul, HIGH);//Coloca azul em nível alto
  digitalWrite(vermelho, HIGH);//Coloca vermelho em nível alto
  delay(100); //Intervalo de 100 milisegundos
  digitalWrite(azul, LOW);//Coloca azul em nível baixo
  digitalWrite(vermelho, LOW);//Coloca vermelho em nível baixo
  delay(100); //Intervalo de 100 milisegundos
}
