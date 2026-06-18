const int sensor_pin = A0;
void setup() {
  pinMode(sensor_pin, INPUT);
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(sensor_pin);
  Serial.println(value);
  delay(500);
}
