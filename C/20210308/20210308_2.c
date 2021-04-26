#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{

    FILE *pfile = NULL;
    char *filename = ".\\20210308\\myfile.txt";
    pfile = fopen(filename, "wt");
    if (pfile == NULL)
        printf("Failed to open % s.\n", filename);

    fclose(pfile);
    pfile = NULL;

    if (rename(".\\20210308\\myfile.txt",
               ".\\20210308\\myfile_copy.txt"))
        printf("Failed to rename file.");
    else
        printf("File renamed successfully.");

    remove(".\\20210308\\myfile_copy.txt");
    return 0;
}