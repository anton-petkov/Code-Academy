/*Заделете динамично с malloc памет за char* buffer с размер size = 2,
въвеждайте символи от конзолата с getchar() ги четете, записвайте ги в
буфера. Увеличавайте размера на буфера преди да се препълни с
realloc().
Прекъснете цикъла с Ctrl + Z. Принтирайте буфера и освободете паметта.*/

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
            size *= 2;
            p = realloc(buffer, size * sizeof(char));
        }
    }

    printf("You entered:\n%s", buffer);

    free(buffer);

    return 0;
}