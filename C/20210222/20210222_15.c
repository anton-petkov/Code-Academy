/*Дефинирайте структура с 4 полета (int. char[10], double, enum),
направете масив от 20 структури и ги попълнете. Изведете масива
от структури на стандартния изход в CSV формат (
https://en.wikipedia.org/wiki/Comma-separated_values ). Пример:
prog1 > structs20.cvs*/
#include <stdio.h>
#include <string.h>
enum state
{
    one = 1,
    two = 2,
    three = 3,
    four = 4,
    five = 5,
    six = 6,
    seven = 7,
    eight = 8,
    nine = 9,
    ten = 10,
    eleven = 11,
    twelve = 12,
    thirteen = 13,
    fourteen = 14,
    fifteen = 15,
    sixteen = 16,
    seventeen = 17,
    eighteen = 18,
    nineteen = 19,
    twenty = 20
};

struct date
{
    int broi;
    char *name;
    double price;
    enum state state;
};

int main()
{
    struct date arr[20];
    for (int i = 0; i < 20; i++)
    {
        arr[i].broi = i + 1;
        arr[i].name = " i + 2";
        arr[i].price = i + 0.5;
        arr[i].state = i + 1;
        printf("%d,", arr[i].broi);
        printf("%s,", arr[i].name);
        printf("%g,", arr[i].price);
        printf("%d", arr[i].state);
        printf("\n");
    }

    return 0;
}