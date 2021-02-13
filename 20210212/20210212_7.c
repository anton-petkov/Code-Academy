/*Заделяне на памет с calloc
Заделете динамична памет за масив от елементи, като
извикате функция, която нулира заделената памет.*/
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size, *p, i;
    printf("Enter size for the array: \n");
    scanf("%d", &size);
    p = (int *)calloc(size, sizeof(int));
    printf("The array looks like this:");
    for (i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
    free(p);
    return 0;
}