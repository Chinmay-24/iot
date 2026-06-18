const int irSensor = 2; 
const int led_pin = 10; 
void setup() {
  pinMode(irSensor, INPUT); 
  pinMode(led_pin, OUTPUT); 
  Serial.begin(9600); 
}
void loop() {
  int value = digitalRead(irSensor); 
  Serial.println(value);
  if (value == 0) {
                      digitalWrite(led_pin, 0); 
                  }
  else {
          digitalWrite(led_pin, 1); 
        }
  
  delay(100); 
}
