/*Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.
*/

#include <stdio.h>

void our_strcat(char *s, char *t)
{

    while (*s)
    {
        s++;
    }

    while (*t)
    {
        *s = *t;
        s++;
        t++;
    }
}

int main(void)
{

    char s[100] = "hello world!";
    char t[] = "123";
    our_strcat(s, t);
    printf("%s", s);
    return 0;
}