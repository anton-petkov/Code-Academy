#include <stdio.h>


int main()
{
    int a, b;
    a = 42;
    b = 4;
    int mask = 1 << b - 1;
    int result = a ^ mask;
    
    printf("%i", result);

    return 0;
}
