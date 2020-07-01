// Bibliotecas
#include "library.h"

// Inicialização do objeto do tipo saída digital
void led_class_initialize(digital_output *object)
{
  pinMode(object->pin, OUTPUT);
  
  object->state = false;

  led_class_write(object);
}

// Toggle no estado do objeto passado
void led_class_toggle(digital_output *object)
{
  object->state = !object->state;

  led_class_write(object);
}

// Escreve o estado no GPIO associado a estrutura passada
void led_class_write(digital_output *object)
{
  if (object->invert)
    digitalWrite(object->pin, !object->state);
  else
    digitalWrite(object->pin, object->state);
}
