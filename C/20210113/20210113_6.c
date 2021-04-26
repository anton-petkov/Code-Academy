#include <stdio.h>

int main()
{
    char a = -127;
    unsigned char b = 255;
    int c = 6237498;
    unsigned int d = 4294967292;
    signed long long int e = -9000000000000775845ll;

    printf("%d \n", a);
    printf("%d \n", b);
    printf("%d \n", c);
    printf("%u \n", d);
    printf("%lld \n", e);

    return 0;
}
