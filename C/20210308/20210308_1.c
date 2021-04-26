#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char szBuf[BUFSIZ] = {0};
    do
    {
        printf("\nEnter a value: ");
        gets(szBuf);
        printf("\nYou entered: ");
        puts(szBuf);
    } while (strlen(szBuf) > 0);
    return 0;
}