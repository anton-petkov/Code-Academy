#include <stdio.h>

int addDigit(int a, int b)
{
    printf("%i", a + b);
    return a + b;
}

int main()
{
    int a, b;
    a = 5;
    b = 6;
    addDigit(a, b);

    return 0;
}
