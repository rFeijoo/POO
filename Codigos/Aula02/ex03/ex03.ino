// Includes
  #include "Blynk.h"

// Pre-Processing
  Blynk LED1;

void setup(void)
{
  // Inicializa o Serial Console
  Serial.begin(9600);
  while (!Serial)
    ;
  
  // Configura os GPIOs
  LED1.begin(13);
}

void loop(void)
{
  LED1.loop();
  delay(1000);
}
