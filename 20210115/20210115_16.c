#include <stdio.h>
#define CONST_PI (3.14159)

long double areaOfCircle(int r)
{
    return r * r * CONST_PI;
}

int main()
{
    int r = 5;
    __mingw_printf("%Lf", areaOfCircle(r));
    return 0;
}
