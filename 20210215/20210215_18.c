/*Връщаме се на кода написан в задача 17. Нека сега
отпечатаме стринговете с
декрементиране, започвайки отзад-напред.
*to -- = *from --;
Проверете готовата функция strlen.*/
#include <stdio.h>
#include <string.h>
void cpy(char *a, char *b, char *c, char *d)
{
    int size_a = strlen(a) + 1;
    a += size_a;
    b += size_a;
    int size_c = strlen(c);
    c += size_c;
    d += size_c;

    while (size_a >= 0)
    {
        *b-- = *a--;
        size_a--;
    }

    while (size_c >= 0)
    {
        *d-- = *c--;
        size_c--;
    }
}

int main(int argc, char **argv)
{
    char *str1 = "A string to be copied.";
    char *str3 = "I am very good in strings coping!";
    char str2[50], str4[50];
    cpy(str1, str2, str3, str4);
    printf("%s \n%s", str2, str4);
    return 0;
}