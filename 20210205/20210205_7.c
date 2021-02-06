/*6. Напишете отново функцията void our_strcat(char *s, char *t), която
разгледахме преди малко като използвате указатели, а не
инкрементиращите пrоменливи i, j.
*/

#include <stdio.h>
int strend(char *s, char *t)
{
    int bool = 0;
    char *check = t;
    while (*s)
    {
        if (*s == *check)
        {
            bool ++;
            s++;
            check++;
        }
        else
        {
            bool = 0;
            s++;
            check = t;
        }
    }
    if (bool > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{

    char s[100] = "this is a string";
    char t[] = "isg";

    printf("%d", strend(s, t));
    return 0;
}