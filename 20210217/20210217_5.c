/*Намерете стойностите в интервала 1-5, включително, в двумерен масив
[5] [5] пълен със случайни числа в интервала 0-10, включително.
Използвайте функция, която да пълни числата със случайни.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void check(int a[5][5], int n);
void fill(int a[5][5], int n);

int main(int argc, char *argv[])
{

    int array[5][5];
    int size = sizeof(array) / sizeof(int);
    fill(array, size);
    check(array, size);
    return 0;
}
void fill(int a[5][5], int n)
{
    srand(time(0));

    while (n)
    {
        **a = rand() % 11;
        printf("%d ", **a);
        a++;
        n--;
    }
    printf("\n");
}
void check(int a[5][5], int n)
{
    int res[6] = {0};
    while (n)
    {
        if (**a >= 1 && **a <= 5)
        {
            res[**a]++;
            a++;
            n--;
        }
        else
        {
            a++;
            n--;
        }
    }
    for (int i = 1; i <= 5; i++)
    {
        printf("The number %d is present %d times.\n", i, res[i]);
    }
}
