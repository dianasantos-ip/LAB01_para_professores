/*
    Autor(a):Fábio Souza - Franzininho
    Data: 15/08/23
    Descrição:Neste exemplo vamos ler a temperatura e umidade no monitor serial.
*/

#include "DHT.h"
 
#define DHTPIN 15 
#define DHTTYPE DHT11
 
DHT dht(DHTPIN, DHTTYPE);


/*********************************************************************************
 *  Função Setup
 *  Configurações iniciais da aplicação
 *********************************************************************************/
void setup() 
{
Serial.begin(19200);
Serial.println("Teste de leitura do sensor DHT11");
dht.begin();
}

/*********************************************************************************
 *  Função loop
 *********************************************************************************/
void loop() 
{

  float umidade = dht.readHumidity();
  float temperatura = dht.readTemperature();

  delay(500);
  

  // Se as variáveis temperatura e umidade não forem valores válidos, acusará falha de leitura.
  if (isnan(temperatura) || isnan(umidade)) 
  {
  Serial.println("Falha na leitura do dht11...");
  } 
  else //se não, exibirá os valores lidos 
  {
    //Imprime os dados no monitor serial
    Serial.print("Umidade: ");
    Serial.print(umidade);
    Serial.print(" %\t"); //tab
    Serial.print("Temperatura: ");
    Serial.print(temperatura);
    Serial.println(" °C");
  }
}
