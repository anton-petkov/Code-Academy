#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen(".\\20210308\\file.txt", "wt");
    fputs("String ONE", fp);
    fputs("\nString Two", fp);

    fclose(fp);
    fp = NULL;
    return 0;
}