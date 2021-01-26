#include <stdio.h>
#include <string.h>
void reverse(char s[])
{

    char reversed[100];
    int rev = 0;
    for (int i = strlen(s) - 1; i >= 0; i--)
    {
        reversed[rev] = s[i];
        rev++;
    }
    reversed[rev] = '\0';
    printf("%s\n", reversed);
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