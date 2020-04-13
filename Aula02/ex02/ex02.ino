// Inclui a biblioteca criada
  #include "blink.h"

// Define o pino do LED
  #define ledPin 13

// Cria o objeto da classe
  Blink led;

// Setup
  void setup(void) 
  {
    // Inicializa o Serial Console
    Serial.begin(9600);
    while (!Serial)
      ;
  
    // Chama a funcão "ft_begin()" da classe "Blink"
    led.ft_begin(ledPin);

    // Chama a função "ft_blink()" da classe "Blink"
    led.ft_blink(5);
  }

// Loop
  void loop(void)
  {}
