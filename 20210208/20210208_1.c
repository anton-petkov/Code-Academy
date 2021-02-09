/*Дефинирайте и инициализирайте едномерен масив с 5
елемента. След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf*/
#include <stdio.h>
int main()
{
    int myArray[5];
    for (int i = 0; i < 5; i++)
    {

        scanf("%d", &myArray[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", myArray[i]);
    }
    return 0;
}
