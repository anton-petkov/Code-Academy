/*Направете програма, в която инициализирате пойнтер към
променлива и след това изчислявате сбор на променливата
(използвайки пойнтера) + 5. Отпечатайте на екрана.*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int a=10;
    int *b = &a;
    *b+=5;
    printf("%d", a);    
    return 0;
}