/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 2 - Brilho Futurista: Criando Efeitos de Iluminação com LED RGB 
    Descrição:Neste exemplo vamos  criar uma luz de sinalização utilizando a cor 
    verde, do LED RGB que está no pino 13 do nosso LAB.
*/

const int verde = 13;  // Pino digital onde o LED está conectado

void setup() {
  pinMode(verde, OUTPUT); // Configura o pino LED como saída:
}

void loop() {
  digitalWrite(verde, HIGH); // Liga o LED verde do RGB
  delay(1000); // Mantém ligado por 1 segundo
  digitalWrite(verde, LOW); //Desliga o LED verde do RGB
  delay(1000); // Mantém ligado por 1 segundo
}
