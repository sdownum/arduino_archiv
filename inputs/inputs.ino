/*

inputs
========

Detects a button push and reports the state to the serial console.

Besd on sketches for Chapter 3 from the OSEPP "Arduino Companion" book,
*Arduino Basics*.

*/

int state = 0;
int pin = 13;

void setup()
{
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  state = digitalRead(pin);
  Serial.print("The button state is ");
  Serial.println(state);
  delay(1000);
}

