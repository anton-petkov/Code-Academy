/*Направете масив от указатели към функции по
следния начин:
void add(){...}
void fun2(){...}
void fun3(){...}
void (*func_ptr[3])() = {fun1, fun2, fun3};
Направете меню, с което да питате потребителя коя от
горните функции иска да използва – събиране, изваждане,
умножение и деление. След това попитайте за числата, които
да участват в тази операция, и извикайте функцията, която да
извърши желаната операция.*/
#include <stdio.h>
#include <stdlib.h>
int fnPlus(int nA, int nB) { return (nA + nB); }
int fnMinus(int nA, int nB) { return (nA - nB); }
int fnMult(int nA, int nB) { return (nA * nB); }
int fnDiv(int nA, int nB) { return (nA / nB); }
int main(int argc, char *argv[])
{
    char c;
    int a, b, res;
    int (*pfCalc[4])(int, int) = {fnPlus, fnMinus, fnMult, fnDiv};
    printf("Please enter the operator:\n");
    scanf("%c", &c);
    printf("Please enter the first number:");
    scanf("%d", &a);
    printf("Please enter the second number :");
    scanf("%d", &b);

    if ('-' == c)
    {
        res = pfCalc[1](a, b);
    }
    else if ('+' == c)
    {
        res = pfCalc[0](a, b);
    }
    else if ('*' == c)
    {
        res = pfCalc[2](a, b);
    }
    else if ('/' == c)
    {
        res = pfCalc[3](a, b);
    }
    printf("The result is :%d", res);
    return 0;
}
