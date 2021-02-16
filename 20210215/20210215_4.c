/*Дефинирайте пойнтер и опитайте да отпечатате стойността
му на конзолата (%р) с printf.
Какво се визуализира?*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int *a;
    printf("%p",&a);
    return 0;
}