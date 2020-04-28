#include <stdio.h>
#include "library.cpp"

int main()
{
  int  age;
  char name[20];

  ft_getName(name);

  age = ft_getAge();

  printf("Ola %s.\nVoce tem %d anos.\n", name, age);

  return 0;
}
