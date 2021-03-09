#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen(".\\20210308\\file.txt", "wt");
    fputs("String ONE", fp);
    fputs("\nString", fp);
    fseek(fp, 7, SEEK_SET);

    fpos_t *pos;
    fgetpos(fp, pos);
    printf("%lld", *pos);
    fclose(fp);
    fp = NULL;
    return 0;
}