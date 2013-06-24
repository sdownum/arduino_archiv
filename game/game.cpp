// Do not remove the include below
#include "game.h"

/*

game
====

A game of timing with an array of LEDs and a switch.

This goal is to press the switch when the green LED is lit. The more times
you succeed, the faster the LEDs flash.

Besd on sketches for Tutorial 4 from the OSEPP "Arduino Companion" book,
*Arduino Basics*.


*/

int delay_count = 1200;

void setup()
{
  int i;
  // Start at pin 2, go up to 5
  for (i = 2; i <= 5; i++)
    pinMode(i, OUTPUT);
}

void loop()
{
  int led = random(2,6);
  int delay_dur = random(0, delay_count);

  digitalWrite(led, HIGH);
  delay(delay_dur);
  digitalWrite(led, LOW);
  delay_dur = random(0, delay_count);
  delay(delay_dur);
}

