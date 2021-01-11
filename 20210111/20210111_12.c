#include <stdio.h>

int vdigniBitna(int value, int position)
{
    unsigned int mask = 0x6DB6DB6;
    

    unsigned int result = value | mask;
    return result;
}

int main()
{
    int a, b;
    a = 564;
    b = 3;
    printf("%i", vdigniBitna(a, b));

    return 0;
}
