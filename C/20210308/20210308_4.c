#include <stdio.h>
int main()
{
    FILE *fp;
    char str[60];
    fp = fopen(".\\20210308\\file.txt", "rt");
    if (fp == NULL)
    {
        perror("Error opening file");
        return (-1);
    }
    if (fgets(str, 60, fp) != NULL)
    {
        printf("%s", str);
    }
    fclose(fp);
    fp = NULL;
    return 0;
}