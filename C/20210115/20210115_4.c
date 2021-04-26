#include <stdio.h>

int main()
{
    char arrEscChar[] = {'\t', '\n', '\r', '\v', '\\', '\'', '\"', '\?', '\a', '\b', '\f'};
    for (int i = 0; i < sizeof(arrEscChar) / sizeof(char); i++)
    {
        printf("Escape Character %d '%c'\n", (int)(arrEscChar[i]), arrEscChar[i]);
    }
    return 0;
}
