#include <stdio.h>
#include "f.h"

int main()
{
    int a, b, d;
    float c;
    printf("Please enter value for a:");
    scanf("%d", &a);
    printf("Please enter value for b:");
    scanf("%d", &b);
    printf("Please enter value for c:");
    scanf("%f", &c);
    printf("Please enter value for d:");
    scanf("%d", &d);
    int lcm = leastCommonMultiple(a, b);
    float absol = absolut(c);
    double root = sqr(d);
    printf("the least common multiple of %d and %d is: %d\n", a, b, lcm);
    printf("The absolute value of |%g| is: %g\n", c, absol);
    if (d < 0)
    {
        printf("%d is negative so it does not have root, but here is the root of|%d|: %g\n", d, d, root);
    }
    else
    {
        printf("The %c%d is : %g\n", 251, d, root);
    }

    return 0;
}
