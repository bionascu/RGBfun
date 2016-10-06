/*
  ------------------------------
 | weSTEM High School Conference |
 | Arduino RGB Workshop - Part 4 |
  ------------------------------

 This series demonstrates how to build a very simple RGB full color LED module
 circuit and how to program the module using the Arduino microcontroller.

 We can program the LED to display any color that we want, by controlling which of
 the 3 pins (red, green or blue) of the RGB LED allow current to power the LED. Any
 color can be created with a combination of red, green, and blue, and so we can
 showcase any color with the LED on the module board.

 In this part, we use three analog inputs to control the RGB LED.

Circuit summary:
 * RGB LED common negative connection (cathode), with the longest leg - attached
   to ground
 * Three positive leads of the RGB LED (one red, one green and one blue) - connected
   to digital pins 11, 10, and 9, respectively, each through a 270 Ohm resistor.
 * Potentiometer connected to analog pin 3
 * Proximity sensor connected to analog pin 2
 * Sliding potentiometer connected to analog pin 1

Created by Beatrice Ionascu
April 25, 2016
*/

int redPin = 11; // connect Red lead to pin 11
int greenPin = 10; // connect Green lead to pin 11
int bluePin = 9; // connect Blue lead to pin 11
int potentiometerPin = 3;  
int proximityPin = 2;
int slidePin = 1;

int potentiometerReading;     // the analog reading from the sensor divider
int proximityReading; 
int slideReading;

int redBrightness;        
int greenBrightness;        
int blueBrightness;

void setup(void) {
  // We'll send debugging information via the Serial monitor
  Serial.begin(9600);
}

void loop(void) {
  potentiometerReading = analogRead(potentiometerPin); // 0-1023
  proximityReading = analogRead(proximityPin);
  slideReading = analogRead(slidePin); // 0-1023
  
  //now we have to map 0-1023 to 0-255 since thats the range analogWrite uses
  redBrightness = map(slideReading, 0, 1023, 0, 200);
  analogWrite(redPin, redBrightness);

  greenBrightness = map(proximityReading, 100, 700, 0, 200);
  analogWrite(greenPin, greenBrightness);
  
  blueBrightness = map(potentiometerReading, 0, 1023, 0, 200);
  analogWrite(bluePin, blueBrightness);

  Serial.print("RGB = ");
  Serial.print(redBrightness);  //slideReading
  Serial.print(" - ");
  Serial.print(greenBrightness); //proximityReading  
  Serial.print(" - ");    
  Serial.print(blueBrightness); //potentiometerReading
  Serial.println("");

  delay(100);
}



