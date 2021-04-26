#include <stdio.h>

int vdigniBitna(int value)
{
    unsigned int mask = 0x124; //* this is 100100100

    unsigned int result = value | mask;
    return result;
}

int main()
{
    int a;
    a = 564; //*this is 1000110100

    printf("%i", vdigniBitna(a));

    return 0;
}
