/*Напишете тип за дата, използвайки битови полета. Направете
функция, която извежда дата, използвайки новия тип. Направете
функция, която валидира датата.*/
#include <stdio.h>
#include <stdlib.h>

struct date
{
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year : 12;
};
struct date dateValidation(struct date date)
{

    unsigned int day, month, year;
    printf("Enter day: \n");
    scanf("%d", &day);
    while (day < 1 || day > 31)
    {
        printf("Enter a valid day:\n");
        scanf("%d", &day);
    }
    date.day = day;

    printf("Enter month: \n");
    scanf("%d", &month);
    while (month < 1 || month > 12)
    {
        printf("Enter a valid month:\n");
        scanf("%d", &month);
    }
    date.month = month;

    printf("Enter year: \n");
    scanf("%d", &year);
    while (year < 0)
    {
        printf("Enter a valid year:\n");
        scanf("%d", &year);
    }
    date.year = year;

    return date;
}

void printDate(struct date date)
{

    printf("%d.%d.%d\n", date.day, date.month, date.year);
}

int main(void)
{

    struct date date;
    date = dateValidation(date);
    printDate(date);
    return 0;
}
