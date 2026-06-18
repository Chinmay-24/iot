const int pins=11; 
void setup() {  
    pinMode(pins, OUTPUT);
}
void loop() {  
    digitalWrite(pins, LOW);
    delay(1000);  
    digitalWrite(pins, HIGH);
    delay(2000); 
}
