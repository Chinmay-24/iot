const int buzzer_pin = 2; 
void setup() {
  pinMode(buzzer_pin, OUTPUT); 
}
void loop() {
  digitalWrite(buzzer_pin, 1);
  delay(1000);
  digitalWrite(buzzer_pin, 0);
  delay(2000);
}
