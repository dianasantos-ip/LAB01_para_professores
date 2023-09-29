/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 3 - Show de Luzes: Criando Efeitos Incríveis com LED RGB
    Descrição:Neste exemplo vamos  criar o efeito fade in e fade down, considerando
    a intensidade do LED.
    
*/
// Definindo os pinos para as cores do LED RGB
const int vermelho = 14;
const int verde = 13;
const int azul = 12;

void setup() {
  pinMode(vermelho, OUTPUT);  // Configurando os pino como saída
  pinMode(verde, OUTPUT);  // Configurando os pino como saída
  pinMode(azul, OUTPUT);  // Configurando os pino como saída
}

void loop() {
  fadeRGB(255, 0, 0);  // Fade in vermelho
  fadeRGB(0, 255, 0);  // Fade in verde
  fadeRGB(0, 0, 255);  // Fade in azul
}

// Função para fazer o fade in e fade down das cores
void fadeRGB(int fade_vermelho, int fade_verde, int fade_azul) {
  for (int i = 0; i <= 255; i++) {
    analogWrite(vermelho, map(i, 0, 255, 0, fade_vermelho));
    analogWrite(verde, map(i, 0, 255, 0, fade_verde));
    analogWrite(azul, map(i, 0, 255, 0, fade_azul));
    delay(10);  // Pequeno atraso para visualizar o fade
  }
  
  for (int i = 255; i >= 0; i--) {
    analogWrite(vermelho, map(i, 0, 255, 0, fade_vermelho));
    analogWrite(verde, map(i, 0, 255, 0, fade_verde));
    analogWrite(azul, map(i, 0, 255, 0, fade_azul));
    delay(10);  // Pequeno atraso para visualizar o fade
  }
}
