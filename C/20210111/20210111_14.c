#include <stdio.h>

int flipEveryOdd(int value)
{
    int mask = 0x155; //* This is 101010101
    int result = value ^ mask;
    return result;
}

int main()
{
    int a;
    a = 564; //*this is 1000110100
    printf("%i", flipEveryOdd(a));

    return 0;
}
