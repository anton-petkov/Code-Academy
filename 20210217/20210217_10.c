/*Да намерим простите числа до 1000 и да ги сложим в масив.
Да напишем функция, която да ни казва дали дадено число от 0 - до 1000
е просто.*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int *check(int *prime);

int main(int argc, char *argv[])
{
    int prime[1000] = {0};
    prime[0] = 1;
    prime[1] = 2;
    int *(*pfCheck)(int *str) = NULL;
    pfCheck = check;
    int *res;
    res = (*pfCheck)(prime);
    for (int i = 0; i < 200; i++)
    {
        printf("%d ", *res);
        res++;
    }

    return 0;
}
int *check(int *prime)
{
    int *beg = prime;
    *prime = 1;
    prime++;
    *prime = 2;
    prime++;

    for (int n = 3; n < 1000; n++)
    {
        int flag = 0;
        for (int i = 2; i < n; i++)
        {

            if (n % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            *prime = n;
            prime++;
        }
    }

    return beg;
}
