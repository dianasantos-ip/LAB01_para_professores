/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 5 - Som Cósmico: Criando Beep com Buzzer
    Descrição:Neste exemplo vamos  criar uma forma de se comunicar com outros 
    astrounautas através de beeep do buzzer.
*/

const int buzzerPin = 17; // Pino digital onde o buzzer está conectado

void setup() {
  pinMode(buzzerPin, OUTPUT); // Configura o pino do buzzer como saída
}

void loop() {
  for (int i = 0; i < 3; i++) { // Repete o padrão de beep três vezes
    beep(buzzerPin, 1000, 200); // Frequência de 1000 Hz, duração de 200 ms
    delay(300); // Pausa de 300 ms entre beeps
  }

  delay(1000); // Pausa de 1 segundo entre sequências de beeps
}

// Função para emitir um beep no buzzer
void beep(int pin, unsigned int frequency, unsigned long duration) {
  tone(pin, frequency);      // Emite a frequência desejada
  delay(duration);           // Mantém o beep por uma determinada duração
  noTone(pin);               // Desliga o som
}
