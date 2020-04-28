#include <stdio.h>

void ft_printMessage(char *msg)
{
  printf("Hello %s.\n", msg);
}

void ft_getName(char *name)
{
  int i = 0;

  printf("Entre com seu nome: ");

  name[i] = getchar();

  while (name[i] != '\0' && name[i] != '\n')
    name[++i] = getchar();

  name[i] = '\0';
}

int ft_getAge(void)
{
  int age;

  printf("Entre com sua idade: ");

  scanf("%d", &age);

  getchar();

  return age;
}
