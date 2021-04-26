#include <stdio.h>

int delAfter(int value, int position)
{

    int mask = ~mask;
    mask = mask << (position - 1);
    mask = ~mask;
    value = value & mask;
    return value;
}

int main()
{
    int a, b;
    a = 511;
    b = 5;
    printf("%i", delAfter(a, b));
    return 0;
}
