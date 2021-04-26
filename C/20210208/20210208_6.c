/*Напишете функция, която получава указател към масив с числа и връща
най-голямото от тях. */
#include <stdio.h>
int max(int *myArray)
{
    int result = 0;
    while (*myArray)
    {
        if (result < *myArray)
        {
            result = *myArray;
        }
        myArray++;
    }

    return result;
}
int main()
{
    int myArray[] = {1, 9, 78, 99999, 52, 852, 1992};
    printf("%d", max(myArray));

    return 0;
}
