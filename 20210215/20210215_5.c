/*Дефинирайте и инициализирайте int променлива = 34 и
пойнтер към нея.
Опитайте да ги разместите, като поредност (първо да е
пойнтерът, после променливата).*/
#include <stdio.h>

int main()
{
    int a = 34;
    int *i = &a; /*this wont work if the variable isnt already declared*/

    int *p, k;        /*one ponter*/
    int *m = *i * *p; /*you cant multiply or devise pointers*/

    printf("%d\n", *i);

    return 0;
}