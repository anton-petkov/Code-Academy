/*Напишете функция void itob(int n, char s[], int b), която
преобразува цяло число n в низ s базиран на основа b.
Например itob( n, s[], 16) представя числото n като шеснадесетично число в
стринга s[].
*/
#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    for (int i = 0, j = (strlen(s) - 1); i < j; i++, j--)
    {
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}
void itob(int n, char s[], int b)
{
    int i = 0;
    while (n > 0)
    {
        if ((n % b) >= 10)
        {
            s[i] = (n % b) + 55;
        }
        else
        {
            s[i] = (n % b) + '0';
        }

        n /= b;
        i++;
    }
    reverse(s);
    printf("%s", s);
}
int main()
{
    int a = 12586;
    char str[60];
    int base = 16;

    itob(a, str, base);
    return 0;
}
