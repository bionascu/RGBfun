/*
  ------------------------------
 | weSTEM High School Conference |
 | Arduino RGB Workshop - Part 1 |
  ------------------------------

 This series demonstrates how to build a very simple RGB full color LED module 
 circuit and how to program the module using the Arduino microcontroller.

 We can program the LED to display any color that we want, by controlling which of 
 the 3 pins (red, green or blue) of the RGB LED allow current to power the LED. Any 
 color can be created with a combination of red, green, and blue, and so we can 
 showcase any color with the LED on the module board.

 In this part, we simply turn the red, green and blue lights on or off directly 
 from the Arduino code using the digitalWrite() function.

 Circuit summary:
 * RGB LED common negative connection (cathode), with the longest leg - attached 
   to ground
 * Three positive leads of the RGB LED (one red, one green and one blue) - connected 
   to digital pins 11, 10, and 9, respectively, each through a 270 Ohm resistor.

Created by Beatrice Ionascu
April 25, 2016
*/

int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);  
}

void loop()
{
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
  digitalWrite(bluePin, HIGH);   
}


