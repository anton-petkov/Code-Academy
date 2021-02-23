/*Направете масив от 10 структури от задача 4. Задайте стойност на 10 -те дати, по избор.
struct name array[10]; /* define array */

#include <stdio.h>
#include <string.h>
struct date
{
    int day;
    int month;
    int year;
};

int main()
{
    struct date arr[10];
    for (int i = 0; i < 10; i++)
    {
        arr[i].day = i + 1;
        arr[i].month = i + 2;
        arr[i].year = i + 2010;
        printf("%d.%d.%d\n", arr[i].day, arr[i].month, arr[i].year);
    }

    return 0;
}