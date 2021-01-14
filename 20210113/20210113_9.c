#include <stdio.h>

int main()
{
    double a = 4.9876543;
    long double b = 7.123456789012345678890L;
    long double c = 18398458438583853.28L;
    long double d = 18398458438583853.39875937284928422L;
    
    printf("%.7f \n", a);
    __mingw_printf("%.22Lf\n", b);
    __mingw_printf("%17.2Lf\n", c);
    __mingw_printf("%17.17Lf\n", d);

    return 0;
}
