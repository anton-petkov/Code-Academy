/* Напишете функции, с помощта на които да реализирате динамичен
масив от елементи, чиято големина може да се променя по време на
изпълнение на програмата*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    int *p = NULL;
    int over = 1, i = 0, size;
    char choice;
    printf("Enter the desired size: \n");
    scanf("%d", &size);
    p = (int *)malloc(size * sizeof(int));
    while (over)
    {
        for (i; i < size; i++)
        {
            printf("Enter a number for position %d: \n", i + 1);
            scanf("%d", &*(p + i));
        }
        fflush(stdin);
        printf("The array is full! Do you want to expand it?(y/n) \n");
        scanf("%c", &choice);
        if (choice == 'y')
        {

            size *= 2;
            p = (int *)realloc(p, (size * sizeof(int)));
        }
        else if (choice == 'n')
        {
            printf("Your array is: \n");
            for (i = 0; i < size; i++)
            {
                printf("%d ", *(p + i));
            }
            over = 0;
        }
    }

    return 0;
}