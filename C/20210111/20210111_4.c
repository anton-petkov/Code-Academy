#include <stdio.h>

int vdigniBitna(int value, int position)
{
    int mask = 1 << position - 1;
    int result = value | mask;
    return result;
}

int main()
{
    int a, b;
    a =42;
    b = 3;
    printf("%i", vdigniBitna(a, b));

    return 0;
}
