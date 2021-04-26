/*Да се направи програма, която заделя динамичен масив с брой елементи
зададени от потребителя. За всеки елемент от масива се очаква потребителят да въведе
цяло и число и след това се изчислява сумата на всички елементи от масива.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned size = 0;
    int *p = NULL;
    int sum = 0;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    p = (int *)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {

        scanf("%d", (p + i));
    }
    for (int i = 0; i < size; i++)
    {
        sum += *(p + i);
    }
    free(p);
    printf("The sum of the elements is : %d", sum);

    return 0;
}