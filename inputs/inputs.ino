/*

outputs
========

Randomly makes an array of LEDs twinkle for random durations.

Besd on sketches for Chapter 2 from the OSEPP "Arduino Companion" book,
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

