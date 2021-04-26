/*Решете задачата за генериране на 6 буквена парола с
пойнтери*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    srand(time(0));
    char buffer[6];

    char c;
    while (c != 'y')
    {
        char *arr = buffer;
        int i = 0;
        printf("Your password is: ");
        while (i < 6)
        {
            *arr = (rand() % 26) + 97;
            printf("%c", *arr);
            arr++;
            i++;
        }
        printf("\nDo you like it?(y/n)\n");
        c = getchar();
    }

    return 0;
}
