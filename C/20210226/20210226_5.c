/*Дефинирайте потребителски тип
към масив. Инициализирайте масива, изведете на
конзолата.*/
#include <stdio.h>
#include <string.h>

int main()
{
    typedef int arr[];

    arr myArray = {1, 5, 6, 6, 4, 6, 6, 4, 6, 6, 5, 6, 5, 6};
    for (int i = 0; i < sizeof(myArray) / sizeof(int); i++)
    {
        printf("%d", myArray[i]);
    }

    return 0;
}
