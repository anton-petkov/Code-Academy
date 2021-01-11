#include <stdio.h>

int iz4istiBitna(int value, int position)
{
    int mask = 1 << position - 1;
    mask=~mask;
    int result = value & mask;
    return result;
}

int main()
{
    int a, b;
    a = 25;
    b = 4;
    printf("%i", iz4istiBitna(a, b));

    return 0;
}
