/*Заделяне на памет от стека с alloca.
Заделете памет в стека (няма нужда от free())*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned size = 0;
    int *p = NULL;
    int sum = 0;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    p = (int *)alloca(size * sizeof(int));
    for (int i = 0; i < size; i++)
    {

        scanf("%d", (p + i));
    }
    for (int i = 0; i < size; i++)
    {
        sum += *(p + i);
    }
    printf("The sum of the elements is : %d", sum);

    return 0;
}