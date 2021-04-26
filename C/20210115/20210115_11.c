#include <stdio.h>
#include <string.h>

int main()
{

    char str[] = "Hello";
    char new[5];
    new[0] = str[4];
    new[1] = str[3];
    new[2] = str[2];
    new[3] = str[1];
    new[4] = str[0];
    new[5] = str[5];

    printf("%s", new);
    return 0;
}
