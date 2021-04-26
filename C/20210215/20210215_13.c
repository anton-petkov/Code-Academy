/*Напишете програма, която намира дължината на стринг с
пойнтер! (без да използва length())*/
#include <stdio.h>
int lenght(char *a)
{
    int counter = 0;
    while (*a++ != '\0')
    {
        counter++;
    }
    return counter ;
}
int main(int argc, char **argv)
{
    char *str1="Four";
    

    printf("The size of the string is:%d ", lenght(str1));
    return 0;
}