 /* pino para acionar led na vermelho
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título: Exemplo 2 - Brilho Futurista: Criando Efeitos de Iluminação com LED RGB 
    Descrição:Neste exemplo vamos  criar uma luz de sinalização utilizando a cor 
    azul do LED RGB que está no pino 12 do nosso LAB.
*/

const int azul = 12; // Pino digital onde o LED está conectado

void setup() {
  pinMode(azul, OUTPUT); // Configura o pino do LED como saída
}

void loop() {
  digitalWrite(azul, HIGH);  // Liga o LED azul do RGB
  delay(1000); // Mantém ligado por 1 segundo
  digitalWrite(azul, LOW); //Desliga o LED
  delay(1000); // Mantém ligado por 1 segundo azul do RGB
}
  
