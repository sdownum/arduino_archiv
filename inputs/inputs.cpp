#include "inputs.h"

#define LEDOFF -1

/*

inputs
========

Detects a button push and reports the state to the serial console.

Besd on sketches for Chapter 3 from the OSEPP "Arduino Companion" book,
*Arduino Basics*.

*/

int state = 0;
int pin = 12;
int out_pin = 13;
int out_pin_state = LEDOFF;

void setup()
{
  pinMode(pin, INPUT);
  pinMode(out_pin, OUTPUT);
  Serial.begin(9600);
}

void strobe()
{
	  digitalWrite(out_pin, HIGH);
	  delay(50);
	  digitalWrite(out_pin, LOW);
	  delay(50);
}


void loop()
{
  state = digitalRead(pin);
  if (!state) {
	  Serial.println("The button was pressed.");
	  out_pin_state = -1 * out_pin_state;
  }
  if (out_pin_state != LEDOFF)
	  strobe();
  else
	  digitalWrite(out_pin, LOW);
  delay(300);
}

