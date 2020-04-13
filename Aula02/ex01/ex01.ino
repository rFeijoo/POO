#include "message.h"

void setup(void)
{
  Serial.begin(9600);
  while (!Serial)
    ;
}

void loop(void)
{
  Serial.println(msg);

  delay(1000);
}
