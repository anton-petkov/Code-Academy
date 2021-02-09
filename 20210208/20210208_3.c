/*Дефинирайте и инициализирайте тримерен масив с по 5
елемента (5 x 5 x 5).*/
#include <stdio.h>
int main()
{
    int myArray[5][5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                scanf("%d", &myArray[i][j][k]);
            }
        }
    }
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 5; k++)
            {
                printf("%d ", myArray[i][j][k]);
            }
        }
        printf("\n");
    }
    return 0;
}
