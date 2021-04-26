/*Дефинирайте 2 масива с по 10 елемента, А и В, напълнете ги
със случайни числа от 0 до 20, умножете всеки от елементите А[i]*В[i] и
напишете резултата на екрана.
Вариация: Модифицирайте така, че да извежда резултат от целочислено
деление. (Каква проверка трябва да направите?)
*/
#include <stdio.h>
#include <stdlib.h>

void fill(int a[])
{
    for (int i = 0; i < 10; i++)
    {
        a[i] = rand() % 21;
        printf("%d ", a[i]);
    }
    printf("\n");
}
void division(int a[], int b[], int lim)
{
    int res[lim];
    for (int i = 0; i < lim; i++)
    {
        if (a[i] == 0 || b[i] == 0)
        {
            printf("\nDivision with zeroes is not allowed");
            break;
        }

        res[i] = a[i] / b[i];
        printf("%d ", res[i]);
    }
}
void multiply(int a[], int b[], int lim)
{
    int res[lim];
    for (int i = 0; i < lim; i++)
    {

        res[i] = a[i] / b[i];
        printf("%d ", res[i]);
    }
}
int main()
{
    int a[10];

    int b[10];

    fill(a);
    fill(b);
    multiply(b, a, 10);
    division(b, a, 10);
    return 0;
}