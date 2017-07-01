
const int trigPin = 13;
const int echoPin = 12;
//#define trigPin2 11
//#define echoPin2 10
//#define trigPin3 9
//#define echoPin3 8

     int OneEnable = 6;
 //  int TwoEnable = 8;
     int OneMotorL = 4;
     int OneMotorR = 2;
 //  int TwoMotorL = 6;  
 //  int TwoMotorR = 7;  

 //  int led = 3; // LEDS FOR TESTING PWM 
 //  int led2 = 5; // LEDS FOR TESTING  

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 11

#define NUMPIXELS 24

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 250;



void setup() {
  
   
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

 //  pinMode(led, OUTPUT); // FOR TESTING
 //  pinMode(led2, OUTPUT); // FOR TESTING

     Serial.begin (9600);
     strip.begin(); // prepare data pin for the neopixel
     strip.show(); // initializes all neopixels to an initial "off"
}


void loop() {
  
  long duration, distance;
  digitalWrite(trigPin, LOW); //driver trigg low, high, low, to send pulse
  delayMicroseconds(2); // low for 2 microsec
  digitalWrite(trigPin, HIGH);
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


  if (distance < 5) { 

    digitalWrite(OneEnable, HIGH); //enable motor 1
//  digitalWrite(TwoEnable, HIGH); //enable motor 2
    digitalWrite(OneMotorL, HIGH);
    digitalWrite(OneMotorR, LOW);
//  digitalWrite(TwoMotorL, HIGH);
//  digitalWrite(TwoMotorR, LOW);
//    digitalWrite(led,HIGH); 
//    digitalWrite(led2,HIGH);
    
   
// For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
    int i, j;
    for(j=0; j<256; j++) {
    for(i=0; i<strip.numPixels(); i++) {
     strip.setPixelColor(i, 1);
 }
 strip.show();
}

}

  else {
   
    digitalWrite(OneEnable, LOW); //enable motor 1
//  digitalWrite(TwoEnable, LOW); //enable motor 2  
//    digitalWrite(led,LOW); // When the Red condition is met, the Green LED should turn off
//    digitalWrite(led2,LOW);

 // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
 int i, j;

for(j=0; j<256; j++) {
 for(i=0; i<strip.numPixels(); i++) {
 strip.setPixelColor(i, 0);
 }
 strip.show();

}
}

    delay(500);
}
