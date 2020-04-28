#include <stdio.h>

void ft_printMessage(char *msg)
{
  printf("Hello %s.\n", msg);
}

int main()
{
  char str1[] = "World";
  char str2[] = "Rafael";

  ft_printMessage(str1);

  ft_printMessage(str2);

  return 0;
}
