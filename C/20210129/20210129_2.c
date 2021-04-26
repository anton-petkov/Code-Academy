#include <stdio.h>

extern const double pi;

double areaOfCircle()
{
    double r;
    printf("Please enter the value of the radius: ");
    scanf("%lf", &r);

    return r * r * pi;
}

int main()
{

    double rez = areaOfCircle();
    printf("%lf", rez);
    return 0;
}
const double pi = 3.14;