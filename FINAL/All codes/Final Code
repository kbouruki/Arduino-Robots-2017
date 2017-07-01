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


int InfraredSensor = A0; 

// Infrared Sensor (Right lead) connected to analog pin 3
// middle Lead) connected to +5V, left Lead) connected to ground 

#define trigPin 13
#define echoPin 12
#define trigPin2 A1
#define echoPin2 A2
 
 #define OneEnable  7
 #define TwoEnable  4
 #define OneMotorL  6
 #define OneMotorR  1 
 #define TwoMotorL  3
 #define TwoMotorR  1

 #define ThreeEnable 8
 #define FourEnable  2
 #define ThreeMotorL 9
 #define ThreeMotorR 1
 #define FourMotorL  5 
 #define FourMotorR  1


#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 11

#define NUMPIXELS 24

Adafruit_NeoPixel strip = Adafruit_NeoPixel(NUMPIXELS, PIN, NEO_GRB + NEO_KHZ800);

int delayval = 250;

 //  int led = 3; // LEDS FOR TESTING PWM 
 //  int led2 = 5; // LEDS FOR TESTING  

// int distance = 0;
// int speed = 0;

void setup() {
  

    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(trigPin2, OUTPUT);
    pinMode(echoPin2, INPUT);
    pinMode(OneEnable, OUTPUT); //enable motor 1
    pinMode(TwoEnable, OUTPUT); //enable motor 2
    pinMode(OneMotorL, OUTPUT);
    pinMode(OneMotorR, OUTPUT);
    pinMode(TwoMotorL, OUTPUT);
    pinMode(TwoMotorR, OUTPUT);
    pinMode(ThreeEnable, OUTPUT);
    pinMode(FourEnable, OUTPUT);
    pinMode(ThreeMotorL, OUTPUT);
    pinMode(ThreeMotorR, OUTPUT);
    pinMode(FourMotorL, OUTPUT);
    pinMode(FourMotorR, OUTPUT);
    Serial.begin (9600);
    strip.begin(); // prep the neopixel
    strip.show();



 
//    pinMode(led, OUTPUT); // FOR TESTING
  //  pinMode(led2, OUTPUT); // FOR TESTING

}

void loop() {

int val = 0; // variable to store the value read for IR
val = analogRead(InfraredSensor); // read the input pin

Serial.print(val);
 Serial.println(" ir2");


  long duration, distance;   //defining distance of US sensor 1`
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
    Serial.println(" us1");
  }
  delay(500);


  long duration2, distance2;   //defining distance of US sensor 2 `
  digitalWrite(trigPin2, LOW); //driver trigg low, high, low, to send pulse
  delayMicroseconds(2); // low for 2 microsec
  digitalWrite(trigPin2, HIGH);
  //delayMicroseconds(1000); 
  delayMicroseconds(10); //high for 10 microsex
  digitalWrite(trigPin2, LOW);
  duration2 = pulseIn(echoPin2, HIGH);
  distance2 = (duration/2) / 29.1;
 
  if (distance2 >= 200 || distance2 <= 0){
    Serial.println("Out of range2");
  }
  else {
    Serial.print(distance2);
    Serial.println(" us2");
  }
  delay(500);



// ultrasonic sensor 1 

if (distance > 50) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 50);
    analogWrite(OneMotorR, LOW);
    delay(30);

 
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
   //       strip.setPixelColor (0, 255, 0, 0); //(number of pixel, red, green, blue);
     //     strip.setPixelColor (11, 255, 0, 0);
         strip.setPixelColor(i, 0); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }

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

  
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (0, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (11, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }

    }

  
  if (distance > 30 && distance < 35) {
   
    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 160);
    analogWrite(OneMotorR, 0);
    delay(30);
  
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (1, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (10, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
                 strip.setBrightness(10);  //overall brightness of all LEDS

      }

    }

  if (distance > 25 && distance < 30) {

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 180);
    analogWrite(OneMotorR, 0);
    delay(30);
  }
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
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }



  if (distance > 15 && distance < 20 ) {

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 200);
    analogWrite(OneMotorR, 0);
    delay(30);
 
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (3, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (8, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }

    }


  if (distance > 10 && distance < 15) {

 digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 220);
    analogWrite(OneMotorR, 0);
    delay(30);
  
 
      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (4, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (7, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }

    }


  if (distance > 4 && distance < 10) {
 digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(OneMotorL, 254);
    analogWrite(OneMotorR, 0);
    delay(30);
  

      // For a set of NeoPixels the first NeoPixel is 0, second is 1, all the way up to the count of pixels minus one.=
      int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (5, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (6, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }

    }

  //Ultrasonic sensor 2

  if (distance2 > 50) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 50);
    analogWrite(TwoMotorR, LOW);
    delay(30);
  
    int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
   //       strip.setPixelColor (23, 255, 0, 0); //(number of pixel, red, green, blue);
    //      strip.setPixelColor (12, 255, 0, 0);
         strip.setPixelColor(i, 0); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }

if (distance2 > 45 && distance2 < 50) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 100);
    analogWrite(TwoMotorR, 0);
    delay(30);

     

  }

  
if (distance2 > 40 && distance2 < 45) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 120);
    analogWrite(TwoMotorR, 0);
    delay(30);

  

  }

    if (distance2 > 35 && distance2 < 40) {
  

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 140);
    analogWrite(TwoMotorR, 0);
    delay(30);
        int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (23, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (12, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }

  }

  
  if (distance2 > 30 && distance2 < 35) {
   
    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 160);
    analogWrite(TwoMotorR, 0);
    delay(30);

        int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (22, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (13, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }


  if (distance2 > 25 && distance2 < 30) {

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 180);
    analogWrite(TwoMotorR, 0);
    delay(30);
        int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (21, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (14, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }


  if (distance2 > 15 && distance2 < 20 ) {

    digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 200);
    analogWrite(TwoMotorR, 0);
    delay(30);
    int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (20, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (15, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }


  if (distance2 > 10 && distance2 < 15) {

 digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 220);
    analogWrite(TwoMotorR, 0);
    delay(30);
    int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (19, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (16, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }


  if (distance2 > 4 && distance2 < 10) {
 digitalWrite(OneEnable, HIGH); //enable motor 1
    analogWrite(TwoMotorL, 254);
    analogWrite(TwoMotorR, 0);
    delay(30);
    int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (18, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (17, 255, 0, 0);
          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line  updates whole strip at once
        strip.setBrightness(10);  //overall brightness of all LEDS
      }
  }


//-------------------IR Sensor below

if (val > 250) // If the read value is > 250 the front and rear wheel activate

{
 digitalWrite(ThreeEnable, HIGH);  
 digitalWrite(FourEnable, HIGH);  

 analogWrite(ThreeMotorL, 220);
 analogWrite(ThreeMotorR, 0);
 analogWrite(FourMotorL, 220);
 analogWrite(FourMotorR, 0);
 int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (5, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (6, 255, 0, 0);
          strip.setPixelColor (18, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (17, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }
}




if (val > 250) {
 digitalWrite(ThreeEnable, HIGH);  
 digitalWrite(FourEnable, HIGH);  

 analogWrite(ThreeMotorL, 220);
 analogWrite(ThreeMotorR, 0);
 analogWrite(FourMotorL, 220);
 analogWrite(FourMotorR, 0);

   int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (4, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (7, 255, 0, 0);
          strip.setPixelColor (19, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (16, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
        strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }
}



if (val > 250) {
 digitalWrite(ThreeEnable, HIGH);  
  digitalWrite(FourEnable, HIGH);  

 analogWrite(ThreeMotorL, 220);
 analogWrite(ThreeMotorR, 0);
 analogWrite(FourMotorL, 220);
 analogWrite(FourMotorR, 0);

       int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (3, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (8, 255, 0, 0);
          strip.setPixelColor (20, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (15, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }
}

if (val > 250) {
 digitalWrite(ThreeEnable, HIGH);  
  digitalWrite(FourEnable, HIGH);  

 analogWrite(ThreeMotorL, 220);
 analogWrite(ThreeMotorR, 0);
 analogWrite(FourMotorL, 220);
 analogWrite(FourMotorR, 0);

       int i, j;
      for (j = 0; j < 256; j++) {
        for (i = 0; i < strip.numPixels(); i++) {
          strip.setPixelColor (2, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (9, 255, 0, 0);
          strip.setPixelColor (21, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (14, 255, 0, 0);
          strip.setPixelColor (1, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (10, 255, 0, 0);
          strip.setPixelColor (22, 255, 0, 0); //(number of pixel, red, green, blue);
          strip.setPixelColor (13, 255, 0, 0);

          // strip.setPixelColor(i, 1); //alternative method, one value for redgreenblue
        }
         strip.show(); //this line updates updates whole strip at once
        strip.setBrightness(20);  //overall brightness of all LEDS
      }
}





  }



// if (distance > 0) {
  //  digitalWrite(OneEnable, LOW); //disable motor 1
  //  delay(30);
 // }





/*defining speed of DC motors
int speed = 100;
 speed = map (distance, 0, 200, 100, 255);


    analogWrite(OneEnable, speed); //enable motor 1
    digitalWrite(OneMotorL, HIGH);
    digitalWrite(OneMotorR, LOW);
    delay(30);
 //   Serial.print("sensor = ");
    Serial.print(distance);
  //  Serial.print("motor = ");
    Serial.println(speed);
    delay(2);
    
*/
