#include <stdio.h>

int main(void)
{
    char c;
    int counter = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            counter++;
            if (counter > 1)
                continue;
            else
            {
                if (counter == 1)
                {
                    putchar(c);
                }
            }
        }
        else
        {
            counter = 0;
            putchar(c);
        }
    }

    return 0;
}