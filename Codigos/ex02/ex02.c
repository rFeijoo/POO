#include <stdio.h>

void ft_printMessage(char *msg)
{
  printf("Hello %s.\n", msg);
}

int main()
{
  char str[] = "World";

  ft_printMessage(str);

  return 0;
}
