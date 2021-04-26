#include <stdio.h>
#include <string.h>

int main()
{
    char c = 0;
    char s[200];

    while (c != EOF)
    {
        c = getchar();
        strncat(s, &c, 1);
        if (c == '\n')
        {
            if (strlen(s) > 80)
            {
                printf("%s", s);
            }
            s[0] = '\0';
        }
    }
    return 0;
}
