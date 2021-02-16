/*Напишете програма, която дефинира масив [10][10][10],
пълни го със случайни числа и смята средното аритметично,
само с един цикъл.*/
#include <stdio.h>
#include <stdlib.h>

double avg(int s[10][10][10], int n)
{
    int *a = &s[0][0][0];
    int res = 0;
    int counter = 0;

    while (n > 0)
    {

        *a = (rand() % 100);
        res += *a;
        printf("%d ", *a);
        counter++;
        a++;
        n--;
    }

    return res / counter;
}
int main(int argc, char **argv)
{
    int str1[10][10][10];

    printf("The average of the array is:%f ", avg(str1, 1000));
    return 0;
}