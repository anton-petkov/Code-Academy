/*Напишете програма, която да прочете низ от потребителя и да го обърне
в обратен ред.
Например: 'xyz' да стане 'zyx*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print(char *str);
void reverse(char *str, char *rev);

int main()
{
    char str[100];
    char str1[100];
    void (*pfPrint)(char *) = print;
    void (*pfReverse)(char *, char *) = reverse;

    printf("Please enter a string:");
    fgets(str, sizeof str, stdin);
    pfPrint(str);
    pfReverse(str, str1);
}

void print(char *str)
{
    int size = strlen(str);
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
}

void reverse(char *str, char *rev)
{
    int size = strlen(str);
    for (int i = size - 1, j = 0; i >= 0, j <= size - 1; i--, j++)
    {
        rev[j] = str[i];
    }
}