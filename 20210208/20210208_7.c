/*Дефинирайте и инициализирайте двумерен масив с по 5
елемента (5 x 5). След като сте готови, направете въвеждане на данните в
масива, като четете от потребителя със scanf.*/
#include <stdio.h>
int g_yearArray[2][13] = {{0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
                          {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}};

int dayCalc(int day, int month, int year)
{
    int isLeap = 0;
    int dayNum = 0;
    if (year % 400 == 0)
    {
        isLeap = 1;
    }
    else if (year % 100 == 0)
    {
        isLeap = 0;
    }
    else if (year % 4 == 0)
    {
        isLeap = 1;
    }
    else
    {
        isLeap = 0;
    }
    for (int i = 0; i < month; i++)
    {
        dayNum += g_yearArray[isLeap][i];
    }
    return dayNum + day;
}
int main()
{
    printf("%d", dayCalc(1, 3, 2017));
    return 0;
}
