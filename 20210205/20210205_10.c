/* Напишете функцията strncat(s, t, n), която добавя
(конкатенира) n символа от стринга t в края на стринга s.
*/

#include <stdio.h>

void our_strcat(char *s, char *t, int n)
{

    while (*s)
    {
        s++;
    }

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

    char s[100] = "hello world!";
    char t[] = "123";
    our_strcat(s, t, 2);
    printf("%s", s);
    return 0;
}