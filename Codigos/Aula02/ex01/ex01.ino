#define LED 13

void setup(void)
{
  // Configura os GPIOs
  pinMode(LED, OUTPUT);
  digitalWrite(LED, LOW);
}

void loop(void)
{
  // Blynk
  digitalWrite(LED, !digitalRead(LED));
  delay(500);
}
