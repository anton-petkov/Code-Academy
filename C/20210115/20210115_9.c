#include <stdio.h>
int charCounter(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}
int main()
{
    char str[] = "Hello";
    printf("The lenght of \"%s\" is : %d", str, charCounter(str));

    return 0;
}
