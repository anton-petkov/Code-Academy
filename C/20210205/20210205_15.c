/*Сумирайте елементите на двумерен масив и намерете средното по редове и колони. 
(Представете си, че са ученици в класове)
*/
#include <stdio.h>

int main(void)
{

    int myArray[2][2] = {{1, 2}, {5, 6}};

    int sum = 0;

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < 2; j++)
        {
            sum += myArray[i][j];
        }
    }
    printf("sum = %d\n", sum);
    for (int i = 0; i < 2; i++)
    {
        float sumOne = 0;
        float sumTwo = 0;
        for (int j = 0; j < 2; j++)
        {
            sumOne += myArray[i][j];
            sumTwo += myArray[j][i];
        }
        printf("The average of column %d is: %g\n", i + 1, sumOne / 2);
        printf("The average of row %d is: %g\n", i + 1, sumTwo / 2);
    }

    return 0;
}