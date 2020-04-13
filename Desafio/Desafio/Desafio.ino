// Includes
#include "Library.h"

// Class Instance
Protocol out;

// Global Variables
const int Input = A0;

void setup(void)
{
  Serial.begin(9600);
  while (!Serial)
    ;

  out.ft_begin(Input);
}

void loop(void)
{
  out.ft_loop();
}
