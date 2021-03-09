#include <stdio.h>

int main(void)
{
    FILE *filePtrIn = NULL;
    FILE *filePtrOut = NULL;
    int totalLines = 1;
    int lineToRemove = 0;
    char str[100];

    filePtrIn = fopen(".\\20210308\\20210308_16\\source.txt", "r+");
    filePtrOut = fopen(".\\20210308\\20210308_16\\target.txt", "w");

    while (!feof(filePtrIn))
    {
        int currentChar = 0;
        currentChar = fgetc(filePtrIn);
        if (currentChar == '\n')
        {
            totalLines++;
        }
    }

    printf("The file has %d lines, which one do you want to remove?: ", totalLines);
    scanf("%d", &lineToRemove);
    totalLines = 1;
    fseek(filePtrIn, 0, SEEK_SET);

    while (fgets(str, 512, filePtrIn) != NULL)
    {
        if (totalLines != lineToRemove)
        {
            fputs(str, filePtrOut);
        }
        totalLines++;
    }

    fclose(filePtrIn);
    fclose(filePtrOut);

    return 0;
}