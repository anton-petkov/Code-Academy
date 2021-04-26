#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    a = 876;
    int oldVal = a & 1;
    int size = log2(a);
    int counter = 0;
    for (int i = 0; i < size + 1; i++)
    {
        a = a >> 1;
        int res = a & 1;
        if (res == 1 & oldVal == 1)
        {
            counter++;
            oldVal = 0;
        }
        else if (res == 1)
        {
            oldVal = 1;
        }
    }
    printf("%i", counter);

    return 0;
}
