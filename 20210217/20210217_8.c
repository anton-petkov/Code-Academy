/*Напишете програма, която да представя Реда на Фибоначи в масив.
Ред на Фибоначи: Всяко число е равно на сумата на двете преди него.
Първите 2 са 0 и 1.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
long long int *check(long long int *str);

int main(int argc, char *argv[])
{
    long long int fib[100] = {0};
    fib[1] = 1;
    long long *(*pfCheck)(long long *str) = NULL;
    pfCheck = check;

    long long int *res;
    res = (*pfCheck)(fib);
    for (int i = 0; i < 200; i++)
    {
        printf("%d ", *res);
        res++;
    }

    return 0;
}
long long int *check(long long int *str)
{
    long long int *beg = str;
    for (int i = 0; i < 100; i++)
    {
        *(str + 2) = *str + *(str + 1);
        str++;
    }
    return beg;
}
