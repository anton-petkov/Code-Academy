#include <stdio.h>
#include <string.h>


int main()
{
    char str[] = "Hello";
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'l')
        {
            str[i] = 'x';
            printf("%c", str[i]);
        }
        else
        {
            printf("%c", str[i]);
        }
    }

    return 0;
}
