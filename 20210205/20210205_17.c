/*Напишете програма за умножение на два двумерни
масиви, елемент по елемент.*/
#include <stdio.h>
void multiply(int a[][3], int b[][3], int lim)
{
    int res[3][3];
    for (int i = 0; i < lim; i++)
    {
        for (int j = 0; j < lim; j++)
        {
            res[i][j] = a[i][j] * b[i][j];
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int a[][3] = {{1, 2, 3}, {7, 8, 9}, {6, 5, 2}};

    int b[][3] = {{4, 5, 6}, {10, 11, 12}, {3, 4, 7}};

    multiply(a, b, 3);
    return 0;
}