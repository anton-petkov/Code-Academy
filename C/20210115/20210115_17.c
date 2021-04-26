#include <stdio.h>

long double areaOfElipse(int a, int b)
{
    const double pi=3.14159;
    return a * b * pi;
}

int main()
{
    int a = 5;
    int b= 6;
    __mingw_printf("%.4Lf", areaOfElipse(a,b));
    return 0;
}
