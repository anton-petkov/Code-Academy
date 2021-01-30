#include <stdio.h>

void chechNumber(int a)
{

    if (a % 2 == 0)
    {
        printf("Thenumber is even!");
    }
    else
    {
        printf("Thenumber is odd!");
    }
}

int main()
{
    int a=0;
    printf("Please enter value for a:");
    scanf("%d", &a);
    chechNumber(a);
    return 0;
}
