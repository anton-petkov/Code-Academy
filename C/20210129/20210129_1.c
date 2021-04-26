#include <stdio.h>
extern const double pi;

double areaOfCircle(double r)
{

    return r * r * pi;
}

int main()
{
    double r = 5;

    double rez = areaOfCircle(r);
    printf("%lf", rez);
    return 0;
}
const double pi = 3.14;