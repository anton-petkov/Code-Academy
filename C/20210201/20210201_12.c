/*напишете функцията int any(char s1[], char s2[]), която
връща първата позиция в низа s1, където се появява някой от
символите в низа s2 (Стандартната библиотечна функция strpbrk
извършва тази функция)*/
#include <stdio.h>
#include <string.h>
int any(char s[], char c[])
{

    for (int i = 0; i < strlen(s); i++)
    {
        for (int j = 0; j < strlen(c); j++)
        {
            if (s[i] == c[j])
            {
                return i + 1;
            }
        }
    }
    return 0;
}
int main()
{
    char str[] = "abcdefg";
    char c[] = "d";

    printf("The first place where some symbol of the second string is present in the first string is: %d", any(str, c));
    return 0;
}
