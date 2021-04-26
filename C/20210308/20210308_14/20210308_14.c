#include <stdio.h>
#include <ctype.h>

int main()
{
    FILE *fileSource, *fileTarget;
    int count_lines = 0;
    char chr;
    fileSource = fopen(".\\20210308\\20210308_14\\source.txt", "r");
    fileTarget = fopen(".\\20210308\\20210308_14\\target.txt", "w");

    chr = fgetc(fileSource);
    while (chr != EOF)
    {

        fputc(toupper(chr), fileTarget);
        chr = fgetc(fileSource);
    }
    fclose(fileSource);
    fclose(fileTarget);
    remove(".\\20210308\\20210308_14\\source.txt");

    rename(".\\20210308\\20210308_14\\target.txt",
           ".\\20210308\\20210308_14\\source.txt");
    fileSource = fopen(".\\20210308\\20210308_14\\source.txt", "r");
    chr = fgetc(fileSource);
    while (chr != EOF)
    {

        printf("%c", chr);
        chr = fgetc(fileSource);
    }

    fclose(fileSource);
    return 0;
}