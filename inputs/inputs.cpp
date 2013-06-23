#include "inputs.h"

/*

inputs
========

Detects a button push and reports the state to the serial console.

Besd on sketches for Chapter 3 from the OSEPP "Arduino Companion" book,
*Arduino Basics*.

*/

int state = 0;
int pin = 12;

void setup()
{
  pinMode(pin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  state = digitalRead(pin);
  if (!state)
    Serial.println("The button was pressed.");
  delay(300);
}

