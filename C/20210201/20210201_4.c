#include <stdio.h>
void copy(char *from, char *to);
int main()
{
    char from[] = "Hello worlds";
    char to[16];
    copy(from, to);
    printf("%s", to);
    return 0;
}
void copy(char *from, char *to)
{
    for (int i = 0; from[i] != '\0'; i++)
    {
        to[i] = from[i];
    }
}