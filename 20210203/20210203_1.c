/*Декларирайте три масива с три елемента:
Първият от тип char
Вторият от тип int
Третият от тип double
Отпечатайте размерите на масивите използвайки
оператора sizeof(arr);*/
#include <stdio.h>
int main()
{
    char c[3];
    int i[3];
    double d[3];
    printf("%d\n", sizeof(c));
    printf("%d\n", sizeof(i));
    printf("%d\n", sizeof(d));
}