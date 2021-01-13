#include <stdio.h>

int main()
{
    float a = 4.9876543;
    double b = 7.123456789012345678890;
    long double c = 18398458438583853.28L;
    long double d = 18398458438583853.39875937284928422L;

    printf("%f \n", a);
    printf("%Lf \n", b);
    printf("%LG \n", c);
    printf("%LG \n", d);

    return 0;
}
