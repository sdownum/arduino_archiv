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

int current_led = 2;
int delay_count = 200;

void setup()
{
  int i;
  // Start at pin 2, go up to 5
  for (i = 2; i <= 5; i++)
    pinMode(i, OUTPUT);

  pinMode(13, INPUT);

}

int check_input() {
	if (digitalRead(13) == 0)
		return 1;
	else
		return 0;
}

void loop()
{
	if (digitalRead(13) == 0) {
		// Blink the chosen LED
		digitalWrite(current_led, HIGH);
		delay(200);
		digitalWrite(current_led, LOW);
		delay(200);
		digitalWrite(current_led, HIGH);
		delay(200);
		digitalWrite(current_led, LOW);
		delay(200);

		if(current_led == 4) {
			// Speed up the game - the correct
			// LED was chosen
			delay_count -= 20;
		}
	}
	digitalWrite(current_led, HIGH);
	delay(delay_count);
	digitalWrite(current_led, LOW);
	delay(delay_count);
	current_led += 1;

	if (current_led > 5)
		current_led = 2;
}

