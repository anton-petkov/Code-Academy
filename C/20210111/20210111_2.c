#include <stdio.h>

int vzemiBitNa(int value, int position)
{   int mask=1<<position-1;
    int result= value & mask;
    result=result>>position-1;
    return result;
}

int main()
{
    int a, b;
    a = 235;
    b = 4;
    printf("%i",vzemiBitNa(a, b));

    return 0;
}
