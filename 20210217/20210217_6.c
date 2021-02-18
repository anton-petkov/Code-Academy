/*Пребройте буквите ‚а‘ в стринг (може да е число и масив).
Пример: "This is a string to test my idea for search in a char and ....";*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int check(char *str);

int main(int argc, char *argv[])
{
    int (*pfCheck)(char *str) = NULL;
    pfCheck = check;
    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,\
                  sed do eiusmod tempor incididunt ut labore et dolore magna\
                  aliqua. Ut enim ad minim veniam, quis nostrud exercitation \
                  ullamco laboris nisi ut aliquip ex ea commodo consequat.\
                  Duis aute irure dolor in reprehenderit in voluptate velit\
                  esse cillum dolore eu fugiat nulla pariatur. Excepteur sint\
                  occaecat cupidatat non proident, sunt in culpa qui officia \
                  deserunt mollit anim id est laborum.";

    printf("The string has the letter a %d times", (*pfCheck)(str));
    return 0;
}
int check(char *str)
{
    int counter = 0;
    while (*str)
    {
        *str = tolower(*str);
        if (*str == 'a')
        {
            counter++;
        }

        str++;
    }
    return counter;
}
