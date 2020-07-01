#include <Arduino.h>

#ifdef __cplusplus
  extern "C" {
#endif

#ifndef LIBRARY_H_
  #define LIBRARY_H_

/*
  Estrutura para uso das saídas digitais
    pin:    GPIO associado a estrutura;
    invert: true para ativação em baixa;
    state:  estado da saída;
*/
typedef struct {
  uint8_t pin;
  bool invert;
  bool state;
} digital_output;

void led_class_initialize(digital_output *object);
void led_class_toggle(digital_output *object);
void led_class_write(digital_output *object);

#endif /*LIBRARY_H_*/

#ifdef __cplusplus
} // extern "C"
#endif
