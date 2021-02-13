/*Напишете програма, която пита потребителя колко
памет иска и заделя съответния блок памет. След
това попитайте потребителя за нов размер и
използвайте функция, която прави това.Ф*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int size = 2, count = 0;
    char *buffer, c, *p;
    buffer = (char *)malloc(size * sizeof(char));
    printf("Enter characters:\n");
    while ((c = getchar()) != EOF)
    {

        count++;
        if (count == size - 1)
        {
            printf("The array is almost full?How much more do you want?\n");
            size += scanf("%d", &size);
            p = realloc(buffer, size * sizeof(char));
        }
    }

    printf("You entered:\n%s", buffer);

    free(buffer);

    return 0;
}