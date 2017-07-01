As you could see from my final code, I did not manage to write the code for an smooth transitional DC motor PWM action in coordination with the distance reader.
Instead I used a analogWrite function code that activates everytime the distance reaches a certain number.

I did try to expand on the option you suggested, but I don't think I did it correctly.
The code compiled correctly, the voltage/connections were correct.

Ill attach 2 scans. In blue is what you wrote. In other colors are how I tried to elaborate but it did not work.



Attached is the code I tried, and I think the mistake is somewhere here:


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
