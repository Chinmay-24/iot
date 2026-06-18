const int buttonpin = 4;
const int motorpin=6;
bool buttonstate;
bool motorstate=1;
void setup() {
  pinMode(buttonpin, 0x03);         
  pinMode(motorpin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  buttonstate  = digitalRead(buttonpin);
  Serial.println(buttonstate);
  if (buttonstate == 1) {
    motorstate=!motorstate;
    digitalWrite(motorpin,motorstate);
    delay(1000);
  }
}
