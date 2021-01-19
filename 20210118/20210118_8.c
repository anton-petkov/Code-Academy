#include <stdio.h>
int isLetter(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char c;
    c = getchar();
    if (isLetter(c))
    {
        printf("\"%c\" is a  aletter", c);
    }
    else
    {
        printf("\"%c\"  is not a letter", c);
    }

    return 0;
}