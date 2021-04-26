#include <stdio.h>

int main(void)
{
    int currentPos = 0;
    int i = 0;
    FILE *filePtr = NULL;
    filePtr = fopen(".\\20210308\\20210308_15\\source.txt", "r");

    fseek(filePtr, 0, SEEK_END);
    currentPos = ftell(filePtr);

    printf("Reversed content: \n");
    for (i = 1; i <= currentPos; i++)
    {
        fseek(filePtr, -i, SEEK_END);
        printf("%c", fgetc(filePtr));
    }

    fclose(filePtr);

    return 0;
}