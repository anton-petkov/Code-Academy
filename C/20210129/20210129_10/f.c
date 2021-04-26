#include "f.h"
#include <math.h>
#include <stdio.h>
int leastCommonMultiple(int a, int b)
{
    int max, step, lcm;

    lcm = 0;

    if (a > b)
        max = step = a;
    else
        max = step = b;

    while (1)
    {
        if (max % a == 0 && max % b == 0)
        {
            lcm = max;
            break;
        }

        max += step;
    }
    return lcm;
}
float absolut(float a)
{
    if (a < 0)
    {
        return a * -1;
    }
    else
    {
        return a;
    }
}
double sqr(int d)
{
    if (d < 0)
    {
        return sqrt(absolut(d));
    }
    else
    {
        return sqrt(d);
    }
}