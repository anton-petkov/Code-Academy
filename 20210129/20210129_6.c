#include <stdio.h>
void decToBinary(int n)
{

    int binary[32];

    int i = 0;
    while (n > 0)
    {

        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
        printf("%i", binary[j]);
}

int main()
{
   int a=0;
    printf("Please enter value for a:");
    scanf("%d", &a);
    printf("The binary representation of %d is:",a);
    decToBinary(a);

    return 0;
}
