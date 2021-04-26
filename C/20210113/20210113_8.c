#include <stdio.h>

int main()
{
    char x = 8;
    x = x - 2; // here x= 6
    x = x + 6; //here x=12
    x = (x - 10) + 2; // here x=12

    printf("The ASCII representation of x is: %c \n", x);
    printf("The decimal representation of x is: %d \n", x);
    

    return 0;
}
