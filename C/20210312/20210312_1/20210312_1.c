/*Реализация на списък. Напишете програма, която добавя и
изтрива елемент от списък по позиция в списъка. Използвайте следния
елемент на динамичния списък:*/
#include <stdio.h>
#include <stdlib.h>
#include "ll.c"
int main(void)
{
    init();
    add(5);
    add(6);
    add(5);
    printNode();
    addAfter(1, 6);
    printf("\n");
    printNode();
    printf("\n");
    del(start, 1);
    printNode();
    return 0;
}