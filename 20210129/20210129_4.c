#include <stdio.h>

int retFunction(int a, int b, int c)
{

    return a * 2 + b * c;
}

int main()
{
    int a, b, c;
    printf("Please enter value for a:");
    scanf("%d", &a);
    printf("\nPlease enter value for b:");
    scanf("%d", &b);
    printf("\nPlease enter value for c:");
    scanf("%d", &c);
    int rez = retFunction(a, b, c);
    printf("%d", rez);
    return 0;
}
