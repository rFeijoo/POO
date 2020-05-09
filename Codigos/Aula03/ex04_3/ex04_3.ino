#define LED 13

long timer = 0;

int main(void)
{
  // Configura os GPIOs
  DDRB  = DDRB | B00100000;           // pinMode(LED, OUTPUT);
  PORTB = 0x00;                       // digitalWrite(LED, LOW);  

  while (true)
  {
    PINB = bit(5);                    // digitalWrite(LED, !digitalRead(LED));

    for (long i=0; i<1000000; i++)     // delay();
      asm("");
  }
}
