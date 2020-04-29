#define LED 13

long timer = 0;

int main(void)
{
  // Configura os GPIOs
  DDRB  = DDRB | B00100000;      // pinMode(LED, OUTPUT);
  PORTB = 0x00;                  // digitalWrite(LED, LOW);  

  while (true)
  {
    if (millis() > timer + 500)
    {
      PINB = bit(5);             //digitalWrite(LED, !digitalRead(LED));
      
      timer = millis();
    }
  }
}
