/*Напишете функция int printArr(int a[], int l), която
получава като първи аргумент началото на масив от интеджери,
а като втори неговата дължина и принтира всички елементи на
масивa един по един до неговия край*/

#include <stdio.h>

int printArr(int a[], int l)
{
    int i = 0;
    while (i < l)
    {
        printf("%d\n", a[i]);
        i++;
    }
    return 0;
}
int main(void)
{

    int a[] = {1, 2, 7, 9, 11, 255};
    printArr(a, 6);

    return 0;
}