#include <stdio.h>
int main()
{
    FILE *fp;
    int c;
    fp = fopen(".\\20210308\\file.txt", "rt");
    if (fp == NULL)
    {
        perror("Error in opening file");
        return (-1);
    }
    while ((c = fgetc(fp)) != EOF)
        printf("%c", c);
    fclose(fp);
    fp = NULL;
    return 0;
}
