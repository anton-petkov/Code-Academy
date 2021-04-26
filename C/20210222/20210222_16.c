/*Използвайки предната задача, напишете програма, която да чете
от стандартния вход CSV формат на описаната структура и да
попълва масив от 20 структури. Пример: prog2 < structs20.cvs*/
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
int main(int argc, char *argv[])
{

    FILE *my_file = fopen("struct20.csv", "r");
    struct date date[20];
    for (int i = 0; i < 20; i++)
    {
        int got = fscanf(my_file, "%d,%s,%lf,%d", date[i].broi, date[i].name, date[i].price, date[i].state);
        if (got != 4)
            break;
    }

    return 0;
}