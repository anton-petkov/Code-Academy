#include <stdio.h>

int areaOfCircle(int a, int b)
{

    return (a + b) * 4;
}

int main()
{
    int a, b;
    printf("Please enter value for a:");
    scanf("%d",&a);
    printf("\nPlease enter value for b:");
    scanf("%d",&b);
    int rez = areaOfCircle(a, b);
    printf("%d", rez);
    return 0;
}
