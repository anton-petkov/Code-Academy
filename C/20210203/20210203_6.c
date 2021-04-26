/* Напишете функция с прототип my_swap(а, b), която разменя
стойностите на две цели числа без да използва спомагателна променлива
(например: *a = *a + *b; *b = *a - *b; *a = *a - *b)/ */
#include <stdio.h>

void my_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
int main(void)
{

    int a = 75, b = 11;
    printf("Before: %d | %d\n", a, b);
    my_swap(&a, &b);
    printf("After:  %d | %d\n", a, b);
    return 0;
}
