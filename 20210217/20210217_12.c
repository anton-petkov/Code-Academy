/*Напишете програма, която да генерира парола с малки букви (i),
специални символи (j), големи букви (k) и цифри (l), ама разбъркано.
Използвайте функции.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define lower 97
#define upper 65
#define numerical 48
#define spChar 33

char *pass(int buff[], char target[], int n);

int main()
{
    char *(*pfPass)(int *buff, char *target, int n) = NULL;
    pfPass = pass;
    srand(time(0));
    int n;
    scanf("%d", &n);
    int buffer[n];
    char target[n];
    char *arr = (*pfPass)(buffer, target, n);
    int i = 0;
    printf("Your password is: ");
    while (i < n)
    {

        printf("%c", *arr);
        arr++;
        i++;
    }

    return 0;
}
char *pass(int buff[], char target[], int n)
{
    for (int i = 0; i < n; i++)
    {
        buff[i] = rand() % 4;
    }

    for (int i = 0; i < n; i++)
    {
        switch (buff[i])
        {
        case 1:
            target[i] = rand() % 26 + lower;
            break;
        case 2:
            target[i] = rand() % 26 + upper;
            break;
        case 3:
            target[i] = rand() % 10 + numerical;
            break;
        case 0:
            target[i] = rand() % 6 + spChar;
            break;
        default:
            break;
        }
    }
    return target;
}
