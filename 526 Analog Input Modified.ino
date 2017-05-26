
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
const int threshold = 800;

void setup() {
   // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
    // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
 // read the value from the sensor:
  int sensorValue = analogRead(sensorPin);  

  // if the analog value is high enough, turn on the LED:
  if (sensorValue > threshold) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
  
     // print out the value you read:
  Serial.println(sensorValue);
  // delay in between reads for stability
  delay(1);     
}
