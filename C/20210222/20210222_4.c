/*Дефинирайте структура “date” с членове ден, месец, година. Създайте
променлива към структурата “contractdate”. По колко начина можете да
я дефинирате?
Задайте стойност на членовете на структурата по три различни начина*/
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
    struct date contractdate1;
    contractdate1.day = 25;
    contractdate1.month = 3;
    contractdate1.year = 1993;
    struct date contractdate2 = {21, 2, 2020};
    struct date contractdate3 = {.year = 1992, .day = 20, .month = 6};
    printf("%d.%d.%d\n", contractdate1.day, contractdate1.month, contractdate1.year);
    printf("%d.%d.%d\n", contractdate2.day, contractdate2.month, contractdate2.year);
    printf("%d.%d.%d\n", contractdate3.day, contractdate3.month, contractdate3.year);
    return 0;
}