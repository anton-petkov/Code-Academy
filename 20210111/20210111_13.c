#include <stdio.h>

int numOfDiff(int value1, int value2)
{
    int result=value1^value2;
    int count = 0;
    while (result)
    {
        count += result & 1;
        result >>= 1;
    }
    return count;
}

int main()
{
    int a, b;
    a =64;
    b = 3;
    printf("%i", numOfDiff(a, b));

    return 0;
}
