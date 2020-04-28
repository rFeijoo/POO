#include <stdio.h>

void ft_printMessage(char *msg, int age)
{
  printf("\%s, %d anos.\n", msg, age);
}

void ft_getName(char *name)
{
  int  i = 0;

  name[i] = getchar();

  while (name[i] != '\0' && name[i] != '\n')
  {
    i++;
    name[i] = getchar();
  }

  name[i] = '\0';
}

int ft_getAge(int i)
{
  int age;

  printf("\tIdade %d: ", i);

  scanf("%d", &age);

  getchar();

  return age;
}
