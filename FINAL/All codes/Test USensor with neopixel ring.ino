
#define trigPin 13
#define echoPin 12

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 11

#define NUMPIXELS 24

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 250;

// -------

void setup() {
  
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 Serial.begin(9600); // setup serial
 strip.begin(); // prep the neopixel
 strip.show();
 
}


// --------------


void loop() {
 
  long duration, distance;
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
//  delayMicroseconds(1000); - Removed this line
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
  if (distance < 4) {
 
{
 // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
 int i, j;
for(j=0; j<256; j++) {
 for(i=0; i<strip.numPixels(); i++) {
 strip.setPixelColor(i, 1);
 }
 strip.show();
}

}
}
  
  else {
 
{
 // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
 int i, j;

for(j=0; j<256; j++) {
 for(i=0; i<strip.numPixels(); i++) {
 strip.setPixelColor(i, 0);
 }
 strip.show();

}
}
}
  if (distance >= 200 || distance <= 0){
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
