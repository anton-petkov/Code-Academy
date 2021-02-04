/*Принтирайте последния елемент от
декларираните по горе масиви:
Първият от тип char
Вторият от тип int
Третият от тип double.*/
#include <stdio.h>
int main()
{
    char c[3] = {1, 2, 3};
    int i[3] = {1, 2, 3};
    double d[3] = {1, 2, 3};
    printf("%d\n", c[3]);
    printf("%d\n", i[3]);
    printf("%d\n", d[3]);
}