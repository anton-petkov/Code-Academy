#include <stdio.h>
#include <stdlib.h>
#define size 100

int main(void)
{

    FILE *fp;
    char str[10], str1[10], str2[10];
    fp = fopen(".\\20210308\\test1.txt", "r");
    if (fp == NULL)
    {
        printf("Failed to open file \n");
        return -1;
    }

    fscanf(fp, "%s %s %s", str, str1, str2);

    printf("%s %s %s", str, str1, str2);

    fclose(fp);
    fp = NULL;
    return 0;
}