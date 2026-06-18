//Program to interface an Infra Red (IR) Sensor with Arduino

//External LED should glow when an object come near the sensor

//Connections : Connector 10 to Connector S1, Connector 12 to Connector D3

const int irSensor = 2; //Define Pin for IR Sensor
const int led_pin = 10; //Define Pin for LED

void setup() {
  pinMode(irSensor, INPUT); //Configure the Pin as INPUT Pin
  pinMode(led_pin, OUTPUT); //Configure the Pin as OUTPUT Pin
  Serial.begin(9600); //This is needed to see the sensor output in serial monitor
}

void loop() {
  int value = digitalRead(irSensor); // Read the sensor value
  Serial.println(value);
  if (value == 0) {
                      digitalWrite(led_pin, 0); // Turn on the LED if obstacle is detected
                  }
  else {
          digitalWrite(led_pin, 1); // Turn off the LED if no obstacle is detected
        }
  
  delay(100); // Adjust this as needed
}
