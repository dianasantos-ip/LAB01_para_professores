/*
    Autor(a): Diana Santos - Franzininho
    Data: 20/08/23
    Título: Exemplo 6 - Explorando a Luz e a Escuridão no espaço com LDR
    Descrição: Neste exemplo responsável por projetar sistemas de iluminação 
    automática para uma estação espacial.
*/      

//Sensor de luz com LDR
int led = 13; // pino 13 
int ldr = 1; //LDR no pino analógico A1
int ldrValor = 1; //Valor lido do LDR

void setup() {
 pinMode(led,OUTPUT); //define LED como Saída
}

void loop() {
 //ler o valor do LDR
 ldrValor = analogRead(ldr); //O valor lido será entre 0 e 1023
 //se o valor lido for maior que 800, liga o led
 if (ldrValor>= 1023){
   digitalWrite(led, LOW);      //aciona saída
 } else {  // senão, apaga o led            
   digitalWrite(led,HIGH);        //desliga saída
 }
 delay(100);
}
