const int ldrpin = A0;
const int ledpin= 10;
void setup() {
  Serial.begin(9600); 
  pinMode(ldrpin, INPUT);
  pinMode(ledpin, OUTPUT);
}
void loop() {
  int ldrValue = analogRead(ldrpin); 
  Serial.println(ldrValue);
  if(ldrValue < 200){
    digitalWrite(ledpin , 0); 
    Serial.println("Light Intensity is Less Than Threshold");
  }
  else{
    digitalWrite(ledpin, 1);
    Serial.println("Light Intensity is More Than Threshold");
  }
  delay(500);
}
