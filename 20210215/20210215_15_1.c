/*Продължение:
Опитайте какво ще стане, ако изпишем инкрементирането така:
*++to= *++from;*/
#include <stdio.h>
void cpy(char *a, char *b, char *c, char *d)
{

    while (*a != '\0')
    {
        *++b = *++a;
    }
    *b = '\0';
    while (*c != '\0')

    {
        *++d = *++c;
    }
    *d = '\0';
}

int main(int argc, char **argv)
{
    char *str1 = "A string to be copied.";
    char *str3 = "I am very good in strings coping!";
    char str2[50], str4[50];
    cpy(str1, str2, str3, str4);
    printf("%s \n%s", str2, str4);
    return 0;
}