#include <stdio.h>

long double areaOfCircle(int r)
{
    const double pi = 3.14159;
    return r * r * pi;
}

int main()
{
    int r = 5;
    __mingw_printf("%Lf", areaOfCircle(r));
    return 0;
}
