/*Напишете програма, която да генерира случайна парола от 6 букви
докато user-а я хареса.
Вариант 1: може да използвате цикли while/for + стрингове
Вариант 2: използвайте функция
Указания:
1. Генерирайте парола
2. Проверете дали потребителя е харесва
3. Повторете докато потребителя си хареса паролата*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    char arr[6];
    char c;
    while (c != 'y')
    {

        printf("Your password is: ");
        for (int i = 0; i < 6; i++)
        {
            arr[i] = (rand() % 26) + 97;
            printf("%c", arr[i]);
        }
        printf("\nDo you like it?(y/n)\n");
        c = getchar();
    }

    return 0;
}
