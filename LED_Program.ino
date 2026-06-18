//Program to blink an external LED

//Connections : Connector 12 to Connector D3

const int pins=11; //Define pin number where LED is connected

void setup() {
  
    pinMode(pins, OUTPUT); //Configure the pin as output pin
}

void loop() {
  
    digitalWrite(pins, LOW);
    delay(1000); //Turn the LED ON for 1000 milli second
  
    digitalWrite(pins, HIGH);
    delay(2000); //Turn the LED OFF for 2000 milli second
}
