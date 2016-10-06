/*
  ------------------------------
 | weSTEM High School Conference |
 | Arduino RGB Workshop - Part 3 |
  ------------------------------

 This series demonstrates how to build a very simple RGB full color LED module
 circuit and how to program the module using the Arduino microcontroller.

 We can program the LED to display any color that we want, by controlling which of
 the 3 pins (red, green or blue) of the RGB LED allow current to power the LED. Any
 color can be created with a combination of red, green, and blue, and so we can
 showcase any color with the LED on the module board.

 In Part 3, we use loops to iterate through all possible RGB values and display 
 the full spectrum of colors.

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
int on = 255;
int off = 0;
int value = 0;


void setup()
{
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
//  analogWrite(redPin, 120);
//  analogWrite(greenPin, 120);
//  analogWrite(bluePin, 120);
//  

  for (int value = 0; value < 255; value++)
  {
    analogWrite(redPin, on);
    analogWrite(bluePin, off);
    analogWrite(greenPin, value);
    delay(10);
  }
  for (int value = 0; value < 255; value++)
  {
    analogWrite(redPin, off);
    analogWrite(bluePin, value);
    analogWrite(greenPin, 255 - value);
    delay (10);
  }
  for (int value = 0; value < 255; value++)
  {
    analogWrite(redPin, value);
    analogWrite(bluePin, 255 - value);
    analogWrite(greenPin, off);
    delay (10);
  }
}
