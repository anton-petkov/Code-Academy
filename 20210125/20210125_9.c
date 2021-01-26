
#include <stdio.h>
#include <string.h>

int main()
{
    char c = 0;
    while ((c = getchar()) != EOF)
    {
        if (c >= 'A' && c <= 'Z')
        {
            c += 32;
            putchar(c);
            continue;
        }
        putchar(c);
    }

    return 0;
}
