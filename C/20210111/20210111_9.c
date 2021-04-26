#include <stdio.h>

int inRange(int value)
{
  int mask = (1 << 2) | (1 << 3) | (1 << 4) | (1 << 5) | (1 << 6); //* this is 00000001111100
  mask = ~mask;
  value = value & mask;
  return value;
}

int main()
{
  int a;
  a = 276; //*this is 1 0001 0100
  printf("%i", inRange(a));
  return 0;
}
