// Inclui a biblioteca criada
#include <Arduino.h>
#include "blink.h"

// Função "begin()"
  void Blink::ft_begin(int Pin)
  {
    pin_ = Pin;
    
    pinMode(pin_, OUTPUT);

    digitalWrite(pin_, LOW);
  }

// Função "ft_blink()"
  void Blink::ft_blink(int qnt)
  {
    for (int i=0; i<qnt; i++)
    {
      digitalWrite(pin_, HIGH);
      delay(500);

      digitalWrite(pin_, LOW);
      delay(500);
    }
  }
