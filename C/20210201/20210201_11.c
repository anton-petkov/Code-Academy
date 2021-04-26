/*напишете функция void squeeze(char s[], int c), която
премахва символа с от низа s[]*/
#include <stdio.h>
void squeeze(char s[], int c)
{
    int i, j = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}
int main()
{
    char str[] = "abcdcadcbacabdbcabdbcbadbcbabdbcadc";
    squeeze(str, 'a');
    printf("%s", str);
    return 0;
}
