/*Напишете програма за умножение на два едномерни
масиви, елемент по елемент. Изведете изходния масив на екрана*/
#include <stdio.h>
void multiply(int a[], int b[], int lim)
{
    int res[3];
    for (int i = 0; i < lim; i++)
    {
        res[i] = a[i] * b[i];
        printf("%d ", res[i]);
    }
}
int main()
{
    int a[3] = {1, 2, 3};

    int b[3] = {4, 5, 6};
    multiply(a, b, 3);
    return 0;
}
