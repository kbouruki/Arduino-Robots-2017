/*
 * IR Sensor activates front motor and rear motor
 * IR Sensor activates LED ring with circular strobing
 * 
 * Ultrasonic sensor left activates right motor
 * Ultrasonic sensor left activates left side of LED ring
 * Ultrasonic sensor right activates left motor
 * Ultrasonic sensor right activates right side of LED ring 
 * 
 * Ultrasonic sensor digital read controls DC motor's analog write
 * 
 * Button push enables system
 * Button push twice disables system
 * Button hold  enables laser
 * Button hold again disables laser 
 */





 int trigPin = 13;
 int echoPin = 12;
//#define trigPin2 11
//#define echoPin2 10
//#define trigPin3 9
//#define echoPin3 8

     int OneEnable = 7;
 //  int TwoEnable = 8;
     int OneMotorL = 6;
     int OneMotorR = 1;
 //  int TwoMotorL = 6;  
 //  int TwoMotorR = 7;  

 //  int led = 3; // LEDS FOR TESTING PWM 
 //  int led2 = 5; // LEDS FOR TESTING  

int distance = 0;
int speed = 0;

void setup() {
  
    Serial.begin (9600);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
 // pinMode(trigPin2, OUTPUT);
 // pinMode(echoPin2, INPUT);
    pinMode(OneEnable, OUTPUT); //enable motor 1
 // pinMode(TwoEnable, OUTPUT); //enable motor 2
    pinMode(OneMotorL, OUTPUT);
    pinMode(OneMotorR, OUTPUT);
 // pinMode(TwoMotorL, OUTPUT);
 // pinMode(TwoMotorR, OUTPUT);

//    pinMode(led, OUTPUT); // FOR TESTING
  //  pinMode(led2, OUTPUT); // FOR TESTING

}

void loop() {

  //defining distance of US sensor
  long duration, distance;
  digitalWrite(trigPin, LOW); //driver trigg low, high, low, to send pulse
  delayMicroseconds(2); // low for 2 microsec
  digitalWrite(trigPin, HIGH);
  //delayMicroseconds(1000); 
  delayMicroseconds(10); //high for 10 microsex
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
 
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);


//defining speed of DC motors

speed = map (distance, 0, 200, 100, 255);


    analogWrite(OneEnable, speed); //enable motor 1
    digitalWrite(OneMotorL, HIGH);
    digitalWrite(OneMotorR, LOW);
    delay(30);
    Serial.print("sensor = ");
    Serial.print(distance);
    Serial.print("motor = ");
    Serial.println(speed);
    delay(2);
    







if (distance > 50 && distance < 55) {
  

    analogWrite(OneEnable, 99); //enable motor 1
    digitalWrite(OneMotorL, HIGH);
    digitalWrite(OneMotorR, LOW);
    delay(30);

  }

 
if (distance > 45 && distance < 50) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 100);
    analogWrite(OneMotorR, 0);
    delay(30);

  }

  
if (distance > 40 && distance < 45) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 120);
    analogWrite(OneMotorR, 0);
    delay(30);

  }

    if (distance > 35 && distance < 40) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 140);
    analogWrite(OneMotorR, 0);
    delay(30);

  }

  
  if (distance > 30 && distance < 35) {
   
    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 160);
 //   analogWrite(OneMotorR, 0);
    delay(30);
  }


  if (distance > 25 && distance < 30) {

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 180);
  //  analogWrite(OneMotorR, 0);
    delay(30);
  }


  if (distance > 15 && distance < 20 ) {

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 200);
 //   analogWrite(OneMotorR, 0);
    delay(30);
  }



  if (distance > 10 && distance < 15) {

 digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 220);
 //   analogWrite(OneMotorR, 0);
    delay(30);
  }


  if (distance > 4 && distance < 10) {
 digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 254);
 //   analogWrite(OneMotorR, 0);
    delay(30);
  }
  



 if (distance > 0) {

    analogWrite(OneEnable, 0); //enable motor 1
  //  digitalWrite(OneMotorL, HIGH);
  //  digitalWrite(OneMotorR, LOW);
    delay(30);
  }

}
