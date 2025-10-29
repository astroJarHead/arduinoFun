/*
  For Loop Iteration w/ 10 times counter

  Demonstrates the use of a for() loop.
  Used to control an RGB LED.

  created 2006
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe
  modified 24 Oct 2025
  by Bob Zavala

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/control-structures/ForLoopIteration/
*/


  // set constants to identify colors
  // verified by experiment
  const int red = 11;  // red LED on pin 11
  const int grn = 10;  // red LED on pin 10
  const int blu = 9;  // red LED on pin 9

  int counter; // counter

void setup() {
  // use a for loop to initialize each pin as an output:
  for (int thisPin = 9; thisPin < 12; thisPin++) {
    pinMode(thisPin, OUTPUT);
  }
}

void loop() {
  // Use analogWrite directed to an output with numbers 
  // zero -> 255 
  // controlling the intensity of the color
  // First color
  analogWrite(red, 255);
  analogWrite(grn, 0);
  analogWrite(blu, 0);
  delay(1000); // Wait 1 sec i.e. 1000 msec
  // Second color
  analogWrite(red, 0);
  analogWrite(grn, 255);
  analogWrite(blu, 0);
  delay(2000); // Wait 2 sec 
  // third color
  analogWrite(red, 0);
  analogWrite(grn, 0);
  analogWrite(blu, 255);
  delay(3000); // Wait 3 sec 
  // repeat 10 times
  for (counter = 0; counter < 10; ++counter) {
    analogWrite(red, 255);
    analogWrite(grn, 0);
    analogWrite(blu, 0);
    delay(1500); // Wait 1.5 sec 
    analogWrite(red, 255);
    analogWrite(grn, 255);
    analogWrite(blu, 255);
    delay(1500); // Wait 1.5sec 
  }
}
