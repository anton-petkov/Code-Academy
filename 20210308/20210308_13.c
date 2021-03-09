#include <stdio.h>

int main()
{
    FILE *fileptr;
    int count_lines = 0;
    char chr;

    fileptr = fopen(".\\20210308\\file.txt", "r");

    chr = fgetc(fileptr);
    while (chr != EOF)
    {

        if (chr == '\n' || chr == '\0')
        {
            count_lines = count_lines + 1;
        }
        chr = getc(fileptr);
    }
    fclose(fileptr);
    printf("There are %d lines\n", count_lines+1);
    return 0;
}