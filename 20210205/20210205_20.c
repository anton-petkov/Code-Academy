/* Проверете дали сумата от елементите на два тримерни
масива са еднакви. Използвайте задачата която сумира елементите на
масив, която правихме по горе за да получите едно сумите на двата
тримерни масива и след това сравнявайте сумите. Тази задача е
подходяща при наличието на голям брой данни (матрици тримерно) те да
бъдат подредени по някакъв признак.*/
#include <stdio.h>
int fsum(int a[2][2][2], int lim)
{
    int res = 0;
    for (int i = 0; i < lim; i++)
    {
        for (int j = 0; j < lim; j++)
        {
            for (int k = 0; k < lim; k++)
            {
                res += a[i][j][k];
            }
        }
    }
    return res;
}

int main()
{
    int a[2][2][2] = {{{1, 2}, {7, 8}}, {{6, 5}, {4, 3}}};

    int b[2][2][2] = {{{6, 8}, {5, 4}}, {{1, 2}, {1, 9}}};
    int sumOne = fsum(a, 2);
    int sumTwo = fsum(b, 2);
    if (sumOne == sumTwo)
    {
        printf("The sym of the two arrays is the same: %d , %d", sumOne, sumTwo);
    }
    else
    {
        printf("The sym of the two arrays is different: %d,%d", sumOne, sumTwo);
    }
    return 0;
}