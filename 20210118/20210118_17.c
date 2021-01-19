#include <stdio.h>
int xorshift(long long A)
{
    A ^= A << 13;
    A ^= A >> 17;
    A ^= A << 5;

    return A;
}

int main()
{
    long long num[] = {1, 2, 7, 16, 42};

    size_t size = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < size; i++)
    {
        printf("%lld\n", xorshift(num[i]));
    }

    return 0;
}
