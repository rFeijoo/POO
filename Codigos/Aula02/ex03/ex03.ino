// Includes
  #include "Blynk.h"

// Pre-Processing
  Blynk LED1, LED2, LED3;

void setup(void)
{
  // Inicializa o Serial Console
  Serial.begin(9600);
  while (!Serial)
    ;
  
  // Configura os GPIOs
  LED1.begin(13);
  LED2.begin(12);
  LED3.begin(11);
}

void loop(void)
{
  LED1.loop();
  LED2.loop();
  LED3.loop();
  
  delay(1000);
}
