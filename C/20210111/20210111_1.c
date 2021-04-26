#include <stdio.h>

void main()
{
    int a = 3;
    int b = 5;
    int result;
    result = a & b;
    printf("Logical AND: %i \n",result);

    result= a|b;
     printf("Logical OR: %i \n",result);

    result= a^b;
     printf("Logical XOR: %i \n",result);

    

}
