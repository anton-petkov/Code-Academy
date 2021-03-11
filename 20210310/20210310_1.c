/*Напишете програма, която сравнява два файла, като отпечатва
първият ред на който се различават и на двата файла.*/
#include <stdio.h>
#include <stdlib.h>

void compare(FILE *pfile1, FILE *pfile2, long int *pos1, long int *pos2, int *line)
{
    char f1, f2;
    *pos1 = ftell(pfile1);
    *pos2 = ftell(pfile2);
    do
    {
        f1 = getc(pfile1);
        f2 = getc(pfile2);
        if (f1 == f2)
        {
            if (f1 == '\n')
            {
                *pos1 = ftell(pfile1);
                *pos2 = ftell(pfile2);
                *line += 1;
            }
        }
        else
        {
            printf("2");
            break;
        }
    } while (f1 != '\0' && f2 != '\0');
}
int main()
{
    int val, line = 0;

    FILE *file1 = NULL;
    char *filename1 = ".\\20210310\\diff1.txt";
    FILE *file2 = NULL;
    char *filename2 = ".\\20210310\\diff2.txt";
    long int pos1, pos2;
    file1 = fopen(filename1, "rt");
    file2 = fopen(filename2, "rt");

    compare(file1, file2, &pos1, &pos2, &line);
    fseek(file1, pos1, SEEK_SET);
    fseek(file2, pos2, SEEK_SET);
    printf("The difference is on line %d:\n", line + 1);
    char c;
    while ((c = getc(file1)) != '\n' && c != EOF)
    {
        printf("%c", c);
    }
    printf("\n\n");
    while ((c = getc(file2)) != '\n' && c != EOF)
    {
        printf("%c", c);
    }

    return 0;
}
