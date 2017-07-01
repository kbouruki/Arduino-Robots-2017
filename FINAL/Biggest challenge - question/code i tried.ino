
int sensorPin = A0;
int motorPin = 9;
int distance = 0;
int speed = 0;


void loop() {

distance = digitalRead(sensorPin);
speed = map (distance, 0, 200, 100, 255);
analogWrite(motorPin, speed);

serial.print("sensor = ");
serial.println(distance);
serial.print("motor = ");
serial.println(speed);
delay(2);

}
