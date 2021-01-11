#include <stdio.h>

int nullTheEven(int value)
{
    int mask = 0x55555555;
    int result = value & mask;
    return result;
}

int main()
{
    int a;
    a = 31;
    printf("%i", nullTheEven(a));
    return 0;
}
