// Bibliotecas
#include "library.h"

// Definição do objeto LED
digital_output LED = {.pin = 13, .invert = false};

// Setup
void setup(void)
{
  // Inicialização do Serial Console
  Serial.begin(9600);
  while (!Serial)
    ;

  // Inicialização do LED
  led_class_initialize(&LED);
}

// Loop
void loop(void)
{ 
  led_class_toggle(&LED);

  Serial.println("STATE: " + String(LED.state));

  delay(1000);
}
