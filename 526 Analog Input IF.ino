
int sensorPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor
const int threshold = 900;
const int threshold2 = 600;

void setup() {
   // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
    // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
 // read the value from the sensor:
  int sensorValue = analogRead(sensorPin);  
    if (sensorValue > threshold) {
      digitalWrite(ledPin, HIGH);
    }
  // if the analog value is high enough, turn on the LED:
  else if (sensorValue > threshold2) {
    digitalWrite(ledPin, HIGH);
      delay(sensorValue);
    digitalWrite(ledPin, LOW);
     delay(sensorValue);
  }
 
 
  
     // print out the value you read:
  Serial.println(sensorValue);
  // delay in between reads for stability
  delay(1);     
}
