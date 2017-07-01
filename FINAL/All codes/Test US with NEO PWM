
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
  distance = (duration / 2) / 29.1;





  if (distance > 35 && distance < 40) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (0, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (11, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }

    }
  }

  if (distance > 30 && distance < 35) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (1, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (10, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
      }

    }
  }




  if (distance > 25 && distance < 30) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (2, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (9, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }

    }
  }




  if (distance > 15 && distance < 20 ) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (3, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (8, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }

    }
  }


  if (distance > 10 && distance < 15) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (4, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (7, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }

    }
  }


  if (distance > 4 && distance < 10) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (5, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (6, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }

    }
  }



  if (distance > 40) {

    {
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
   //       strip.setPixelColor (0, 255, 0, 0); //(number of pixel, red, green, blue);
     //     strip.setPixelColor (11, 255, 0, 0);
         strip.setPixelColor(i, 0); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }

    }
  }


  if (distance >= 200 || distance <= 0) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
  }
  delay(500);
}
