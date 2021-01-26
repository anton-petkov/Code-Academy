#include <stdio.h>
int main(void)
{
    char c;
    c = getchar();
    int count = 0;
    while (c != EOF)
    {
        c = getchar();
        ++count;
    }
    printf("Number of symbols: %d", count);
    return 0;
}