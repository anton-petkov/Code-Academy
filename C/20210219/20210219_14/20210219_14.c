/* Използвайки предишното упражнение, опишете структурите и
прототипите на функциите в отделен заглавен файл с разширение *.h, a
телата на функциите в един или няколко *.c сорс файлове.*/
#include <stdio.h>
#include <stdlib.h>
#include "functions.c"

int main(int argc, char *argv[])
{
    const int cMax = 3;
    struct employee base = {0, "No", "", "One", "", 0, 0};
    struct employee dataBase[cMax];
    fill(dataBase, cMax);
    getBoss(dataBase, base, cMax);
    print(dataBase, cMax);
    return 0;
}
