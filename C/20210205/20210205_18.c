/*Напишете програма за умножение на два тримерни
масиви, елемент по елемент.*/
#include <stdio.h>
void multiply(int a[][2][2], int b[][2][2], int lim)
{
    int res[2][2][2];
    for (int i = 0; i < lim; i++)
    {
        for (int j = 0; j < lim; j++)
        {
            for (int k = 0; k < lim; k++)
            {
                res[i][j][k] = a[i][j][k] * b[i][j][k];
                printf("%d ", res[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
int main()
{
    int a[][2][2] = {{{1, 2}, {7, 8}}, {{6, 5}, {4, 3}}};

    int b[][2][2] = {{{6, 8}, {5, 4}}, {{1, 2}, {3, 9}}};

    multiply(a, b, 2);
    return 0;
}