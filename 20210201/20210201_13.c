/*напишете функцията void lower(char s[]), която
преобразува главните букви в малки.*/
#include <stdio.h>
#include <string.h>
void lower(char s[])
{
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = (char)(s[i] + 32);
        }
    }
}

int main()
{
    char str[] = "AbbSci1321uasd";
    lower(str);
    printf("This is the all low string: %s", str);
    return 0;
}
