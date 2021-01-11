#include <stdio.h>

int nullTheOdd(int value)
{
    unsigned int mask = 0xAAAAAAAA;
    unsigned int result = value ^ mask;
    return result;
}

int main()
{
    int a;
    a = 31;
    printf("%i", nullTheOdd(a));
    return 0;
}
