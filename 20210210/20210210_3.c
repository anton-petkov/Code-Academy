/*Използвайте Задача 1. за да напишете програма, която
проверява дали съобщението не е палиндром. Палиндром е съобщение, в
което буквите от ляво на дясно са същите като от дясно на ляво.
I did, did I?*/
#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0;
    char buffer[] = "i did,d d i";
    char *a = &buffer[0];
    char *b = &buffer[strlen(buffer) - 1];

    while (a != b)
    {
        if (*a - *b == 0)
        {
            a++;
            b--;
            i = 1;
        }
        else
        {
            i = 0;
            break;
        }
    }
    if (i)
    {
        printf("%s, is a palindrome!", buffer);
    }
    else
    {
        printf("|%s|, is not a  palindrome!", buffer);
    }

    return 0;
}
