#define LED 13

long timer = 0;

void setup(void)
{
  // Configura os GPIOs
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop(void)
{
  if (millis() > timer + 500)
  {
    digitalWrite(LED, !digitalRead(LED));

    timer = millis();
  }
}
