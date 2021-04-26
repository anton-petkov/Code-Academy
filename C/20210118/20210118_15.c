#include <stdio.h>

int main()
{
    int nA = 1;
    int nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    printf("Please enter the value of aB");
    scanf("%d", &nA);
    nB = (nA == 1 ? 2 : 0);
    printf("A value is %d\n", nA);
    printf("B value is %d\n", nB);

    scanf("%d", &nA);
    scanf("%d", &nB);

    int result = (nA > nB ? nA : nB);
    printf("The higher number is  %d\n", result);
    return 0;
}