#include <stdio.h>

int inRange(int value)
{
  int mask=(1<<2)|(1<<3)|(1<<4)|(1<<5)|(1<<6);
  mask=~mask;
  value=value&mask;
  return value;
}

int main()
{
    int a;
    a = 276;
    printf("%i", inRange(a));
    return 0;
}
