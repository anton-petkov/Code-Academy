#include <stdio.h>
#include "fmul.h"

int main()
{
    int a;
    printf("Please enter value for a:");
    scanf("%d", &a);

    int rez = funOne(a);
    printf("Rezult is: %d\n", rez);

    return 0;
}
int funOne(int a)
{
    a = funTwo(a);
    return ++a;
}
int funTwo(int a)
{
    a = funThree(a);
    return ++a;
}
int funThree(int a)
{
    return ++a;
}