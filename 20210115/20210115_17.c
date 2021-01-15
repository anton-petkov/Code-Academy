#include <stdio.h>
#define CONST_PI (3.14159)

long double areaOfElipse(int a, int b)
{
    return a * b * CONST_PI;
}

int main()
{
    int a = 5;
    int b= 6;
    __mingw_printf("%Lf", areaOfElipse(a,b));
    return 0;
}
