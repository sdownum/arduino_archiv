int output_pin = 13;
int input_pin = 0;
int val = 0;

void setup()
{
  pinMode(output_pin, OUTPUT);
}

void loop()
{
  analogRead(input_pin);
  delay(1000);
}
