#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;

    fp = fopen(".\\20210308\\file.txt", "w+");
    fprintf(fp, "%s %s %s %d", "We", "are", "in", 2021);

    fclose(fp);

    return (0);
}