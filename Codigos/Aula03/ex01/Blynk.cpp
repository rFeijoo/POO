#include "Blynk.h"

void Blynk::begin(int pin)
{
  pin_ = pin;
  
  pinMode(pin, OUTPUT);

  state = false;

  digitalWrite(pin, LOW);
}

void Blynk::loop(void)
{
  state = !state;

  digitalWrite(pin_, state);

  Serial.println(String(pin_)+": "+String(state));
}
