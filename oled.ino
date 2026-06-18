#include <Wire.h> 
#include <Adafruit_SSD1306.h> 
#include "DHT.h"
#define SCREEN_WIDTH 128 // OLED display width, in pixels
#define SCREEN_HEIGHT 64 // OLED display height, in pixels
#define OLED_RESET    -1 // Reset pin # (or -1 if sharing Arduino reset pin)
#define SCREEN_ADDRESS 0x3C 
Adafruit_SSD1306 display_object(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);
#define DHTPIN 12     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // DHT 22 (AM2302), AM2321
DHT dht_object(DHTPIN, DHTTYPE);
void setup() {
  Serial.begin(9600);
  display_object.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS); 
  display_object.clearDisplay();
  display_object.setTextSize(2);
  display_object.setTextColor(SSD1306_WHITE);
  dht_object.begin();
}
void loop() {
  delay(2000);
  float h = dht_object.readHumidity();
  float t = dht_object.readTemperature();
  if (isnan(h) || isnan(t)) {
    display_object.clearDisplay();
    display_object.setCursor(0,0);
    display_object.print("Failed to read");
    display_object.display();
    return;
  }
  Serial.print("Humidity: "); 
  Serial.print(h);
  Serial.println("%"); 
  Serial.print("Temperature :");
  Serial.print(t);
  Serial.println("°C"); 
  display_object.clearDisplay();
  display_object.setCursor(0,0);
  display_object.print(F("Hum :"));
  display_object.print(h);
  display_object.println("%");
  display_object.print("Temp :");
  display_object.print(t);
  display_object.print((char)247);
  display_object.println("C");
  display_object.display();    
  
}
