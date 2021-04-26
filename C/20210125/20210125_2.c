#include <stdio.h>
int main(void)
{
    char c = 0;
    int nl = 0;
    while (c = getchar() != EOF)
    {
        if (c == '\n')
        {
            nl++;
        }
    }
    printf("Number of lines: %d", nl);
    return 0;
}