/*Задача 4.
Заделяне и освобождаване на памет - malloc, free. Заделете
динамично памет за масив и попълнете елементите*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int size, *p, i;
    printf("Enter a size for the array: \n");
    scanf("%d", &size);
    p = (int *)malloc(size * sizeof(int));

    for (i = 0; i < size; i++)
    {
        printf("Enter a number for position: %d\n", i);
        scanf("%d", &*(p + i));
    }

    printf("Your array is:\n");

    for (i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }

    free(p);

    return 0;
}