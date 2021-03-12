/*Направете едносвързан списък, съдържащ числата 1-14 и
принтирайте петия елемент от края му.*/
#include <stdio.h>
#include <stdlib.h>
#include "ll.c"
int main(void)
{
    init();
    for (int i = 1; i <= 14; i++)
    {
        add(i);
    }
    printNode();
    printNth(5);
    return 0;
}