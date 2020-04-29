#include <Arduino.h>

#ifndef BLYNK_H_
  #define BLYNK_H_
  
  class Blynk
  {
    public:
      void begin(int pin);
      void loop(void);
  
    private:
      int  pin_;
      bool state;
  };

#endif /*BLYNK_H_*/
