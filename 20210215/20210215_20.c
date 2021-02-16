/*Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *replace(char *str, char *s1, char *s2)
{
    char *dest = malloc(strlen(str) - strlen(s1) + strlen(s2) + 1);
    char *ptr;

    strcpy(dest, str);

    ptr = strstr(dest, s1);
    if (ptr)
    {
        memmove(ptr + strlen(s2), ptr + strlen(s1), strlen(ptr + strlen(s1)) + 1);
        strncpy(ptr, s2, strlen(s2));
    }

    return dest;
}

int main(int argc, char **argv)
{
    char str1[] = "I am a poor programmer!";
    char *result = replace(str1, "poor", "great");
    printf("%s ", result);
    return 0;
}