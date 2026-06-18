//Program to Interface Buzzer with Arduino

//Connection : Connector 10 to Connector A3

const int buzzer_pin = 2; //Define the pin to connect Buzzer

void setup() {
  pinMode(buzzer_pin, OUTPUT); //Configure the Pin as OUTPUT port
}
void loop() {
  digitalWrite(buzzer_pin, 1);
  delay(1000);//Turn the Buzzer OFF for 1000 milli second
  digitalWrite(buzzer_pin, 0);
  delay(2000);//Turn the Buzzer ON for 1000 milli second
}
