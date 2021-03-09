#include <stdio.h>
int main()
{
    FILE *fp;
    int ch;
    fp = fopen(".\\20210308\\file.txt", "wt+");
    for (ch = 43; ch <= 100; ch++)
    {
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}