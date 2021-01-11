#include <stdio.h>

int posOfMLB(int value)
{
    int count=-1;
    while (value != 1)
    {
        value = value >> 1;
        count = count + 1;
    }

    return count;
}
int main()
{
    int a;
    a = 278;
    printf("%i", posOfMLB(a));
    return 0;
}
