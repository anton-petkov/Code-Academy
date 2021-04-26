#include <stdio.h>

int obarniBitna(int value, int position)
{
    int mask = 1 << position - 1;
    int result = value ^ mask;
    return result;
}

int main()
{
    int a, b;
    a = 42;
    b = 4;
    printf("%i", obarniBitna(a, b));

    return 0;
}
