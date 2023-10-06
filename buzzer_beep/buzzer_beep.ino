/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 5 - Som Cósmico: Criando Beep com Buzzer
    Descrição:Neste exemplo vamos  criar uma forma de se comunicar com outros 
    astrounautas através de beeep do buzzer.
*/
/*
    Autor(a): Diana Santos - Franzininho
    Data: 08/08/23
    Título:Exemplo 5 - Som Cósmico: Criando Beep com Buzzer
    Descrição:Neste exemplo vamos  criar uma forma de se comunicar com outros 
    astrounautas através de beeep do buzzer.
*/
const int buzzer = 17; //Constante armazenando o número do pino que vamos utilizar

void setup() {
  /*
    Informamos que ao pino 8 será de saída.
  */
  pinMode(buzzer,OUTPUT);
}

void loop() { 
  /* Ligamos o buzzer com uma frequencia de 1500hz*/
  tone(buzzer,1500);  
  delay(1000); 
 /*Em delay esperamos um segundo para avançar para a próxima linha*/

  noTone(buzzer);
  /*Desligamos o Buzzer*/
  
  delay(1000);
 /*Esperamos um segundo para finalizar o método*/
}
