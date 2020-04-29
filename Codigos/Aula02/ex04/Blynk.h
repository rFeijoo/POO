#include <Arduino.h>

class Blynk
{
  public:
    void begin(int pin);
    void loop(void);

  private:
    int  pin_;
    bool state;
};
