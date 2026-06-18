#include "DHT.h" 
#define DHTPIN 12
DHT dht_object(DHTPIN, DHT11); //Create an Object of class DHT with Pin Number and Type of Sensor (DHT11 or DHT22) as attributes
void setup() {
  Serial.begin(9600);
  dht_object.begin();  //sensor is initialising
}
void loop() { 
  delay(2000);
  float h = dht_object.readHumidity(); 
  float t = dht_object.readTemperature(); 
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed to read from DHT sensor!"));
    return;
  }
  Serial.print("Humidity: "); 
  Serial.print(h);
  Serial.println("%"); 
  Serial.print("Temperature :");
  Serial.print(t);
  Serial.println("°C"); 
}
