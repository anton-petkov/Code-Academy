/*Напишете функцията strncpy(s, t, n), която копира най -
много n символа от t в s .
*/

#include <stdio.h>

void our_strcat(char *s, char *t, int n)
{
    while (n)
    {
        *s = *t;
        s++;
        t++;
        n--;
    }
    *s = 0;
}

int main(void)
{

    char s[100];
    char t[] = "123";
    our_strcat(s, t, 3);
    printf("%s", s);
    return 0;
}