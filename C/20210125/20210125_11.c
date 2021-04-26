#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    for (int i = 0, j = (strlen(s) - 1); i < j; i++, j--)
    {
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
    printf("%s\n", s);
}

int main()
{
    char c = 0;
    char s[100];
    while (c != EOF)
    {
        c = getchar();
        strncat(s, &c, 1);
        if (c == '\n')
        {
            reverse(s);
            *s = '\0';
        }
    }
    return 0;
}
