/*

outputs
========

Sketches for Chapter 2 from the OSEPP "Arduino Companion" book,
*Arduino Basics*.


Try to randomize delay and color on each loop
*/

int LED0 = 2;
int LED1 = 3;
int LED2 = 4;
int LED3 = 5;
int delay_count = 200;

void setup()
{
  pinMode(LED0, OUTPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);

}

void loop()
{
  digitalWrite(LED0, HIGH);
  delay(delay_count);
  digitalWrite(LED0, LOW);
  delay(delay_count);
  digitalWrite(LED1, HIGH);
  delay(delay_count);
  digitalWrite(LED1, LOW);
  delay(delay_count);
  digitalWrite(LED2, HIGH);
  delay(delay_count);
  digitalWrite(LED2, LOW);
  delay(delay_count);
  digitalWrite(LED3, HIGH);
  delay(delay_count);
  digitalWrite(LED3, LOW);
  delay(delay_count);
}

