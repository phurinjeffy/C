#include <stdio.h>

int main()
{
  printf("Hello World!\n");

  int myInt = 7;
  double myDouble = 25.5;

  printf("%i\n", myInt);
  printf("%lf\n", myDouble);

  for (int i = 0; i < 10; i++)
  {
    if (i % 2)
    {
      printf("%i\n", i);
    }
  }

  return 0;
}