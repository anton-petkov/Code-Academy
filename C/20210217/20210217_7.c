/*Хванете дълъг стринг и пребройте колко пъти се среща всяка буква от
азбуката в него. Запишете резултата в масив за всяка буква. */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int asciileter = 96;
void check(char *str);

int main(int argc, char *argv[])
{
    void (*pfCheck)(char *str) = NULL;
    pfCheck = check;
    char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit,\
                  sed do eiusmod tempor incididunt ut labore et dolore magna\
                  aliqua. Ut enim ad minim veniam, quis nostrud exercitation \
                  ullamco laboris nisi ut aliquip ex ea commodo consequat.\
                  Duis aute irure dolor in reprehenderit in voluptate velit\
                  esse cillum dolore eu fugiat nulla pariatur. Excepteur sint\
                  occaecat cupidatat non proident, sunt in culpa qui officia \
                  deserunt mollit anim id est laborum.";

    (*pfCheck)(str);
    return 0;
}
void check(char *str)
{
    int res[27] = {0};
    while (*str)
    {
        *str = tolower(*str);
        if (*str >= 'a' && *str <= 'z')
        {
            res[*str - asciileter]++;
            str++;
        }
        else
        {
            str++;
        }
    }
    for (int i = 1; i < 27; i++)
    {
        printf("The letter %c is present %d times.\n", i + asciileter, res[i]);
    }
}
