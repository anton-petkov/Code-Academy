#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen(".\\20210308\\file.txt", "wt");
    fputs("String ONE", fp);
    fputs("\nString", fp);
    fpos_t *pos;
    fgetpos(fp, pos);
    printf("%lld", *pos);
    fclose(fp);
    fp = NULL;
    return 0;
}