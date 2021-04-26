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
    char a = -10;
    unsigned char z=0;
    char result= a+z;
    printf("%c \n",result);
    decToBinary(result);

    return 0;
}
