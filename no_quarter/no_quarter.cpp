// Do not remove the include below
#include "no_quarter.h"


/*
no_quarter
==========

This is a sketch for LED control. Right now it just strobes. The plan
is to have a python-based utility to generate and upload a LED control
sketch based on submitted arguments. Optionally, the sketch itself could take
arguments from the serial monitor.

Of course, this is a #wip.

Yes, this is currently just blink from Arduino.cc

*/
int led = 13;
int delay_count = 50;

void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  delay(delay_count);
  digitalWrite(led, LOW);
  delay(delay_count);
}
