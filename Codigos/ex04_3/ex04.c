#include <stdio.h>
#include "library.cpp"

int main(int argc, char **argv)
{
  int  age[5];
  char name[5][20];

  for (int i=1; i<=5; i++)
  {
    printf("Cadastro %d:\n", i);

    printf("\tNome %d: ", i);

    ft_getName(name[i]);

    age[i] = ft_getAge(i);

    printf("\n");
  }

  printf("\n");

  for (int i=1; i<=5; i++)
  {
    printf("Cadastro %d: ", i);

    ft_printMessage(name[i], age[i]);
  }

  return 0;
}
