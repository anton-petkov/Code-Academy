#include <stdio.h>
#include <math.h>

int posOfMLB(int value)

{
    for (int i = 0; value != 0; i++)
    {

        int p = pow(2, i);
        printf("%i \n", (value & 1) * p);
        printf("\n");
        value >>= 1;
    }

    return 0;
}
int main()
{
    int a;
    a = 10;
    posOfMLB(a);
    return 0;
}
