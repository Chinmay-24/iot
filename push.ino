const int ledpin=10;
const int buttonpin = 4;
bool buttonstate;
bool ledState = 1;
void setup() {
  pinMode(buttonpin, 0x03); 
  pinMode(ledpin, OUTPUT);
  Serial.begin(9600);
  digitalWrite(ledpin,ledState);
}
void loop() {
  buttonstate  = digitalRead(buttonpin);
  Serial.println(buttonstate);
  if (buttonstate == 1) {
    ledState = !ledState;
    digitalWrite(ledpin, ledState);
    delay(1000);
  }
}
