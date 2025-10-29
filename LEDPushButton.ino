// C++ code for Arduino 
// based on TinkerCAD youtube example
// "Pushbutton Digital Input With Arduino in Tinkercad"
// https://www.youtube.com/watch?v=PC15jBx2UxI

// Set a const for the LED output 
// 13 controls internal LED and an output
const int outPin = 8 ; // pin number for LED

// Initialize global variable for the pushbutton state
int buttonState = 0;

void setup()
{
  pinMode(2, INPUT); // pin 2 for button input
  pinMode(outPin, OUTPUT); // pin for LED output control 
}

void loop()
{
  // read state of pushbutton
  buttonState = digitalRead(2);
  // if pushbutton IS pressed LED = ON
  if (buttonState == HIGH) {
    digitalWrite(outPin, HIGH);
  // not pressed LED = OFF
  } else {
    digitalWrite(outPin, LOW);
  }
}
