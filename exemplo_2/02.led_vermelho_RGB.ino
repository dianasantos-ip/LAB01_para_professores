 /* pino para acionar led na vermelho
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 2 - Brilho Futurista: Criando Efeitos de Iluminação com LED RGB 
    Descrição:Neste exemplo vamos  criar uma luz de sinalização utilizando a cor 
    vermelha do LED RGB que está no pino 14 do nosso LAB.
*/

const int vermelho = 14; // Pino digital onde o LED está conectado

void setup() {
  pinMode(vermelho, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
 // aciona o Led na cor vermelho:
  digitalWrite(vermelho, HIGH);  // Liga o LED vermelho do RGB
  delay(1000); // Mantém ligado por 1 segundo
  digitalWrite(vermelho, LOW); //Desliga o LED
  delay(1000); // Mantém ligado por 1 segundo vermelho do RGB
}
  
