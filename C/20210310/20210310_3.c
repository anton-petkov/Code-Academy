/*Напишете програма за отпечатване на файловете добавени след а.ехе ,
като започнете всеки нов на нова страница със заглавие и номере на всяка
страница за всеки файл.*/
#include <stdio.h>
int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        for (int i = 1; i < argc; i++)
        {
            int counter = 0;
            int page = 1;
            FILE *file = NULL;
            char *filename = argv[i];
            file = fopen(filename, "rt");

            printf("Filename: %s\n", filename);
            char c;

            while ((c = fgetc(file)) != EOF)
            {
                putchar(c);
                if (c == '\n')
                {
                    counter++;
                }
                if (counter == 42)
                {   counter=0;
                    printf("\n          Page: %d\n \n", page++);
                }
            }

            printf("\n\n\n");

            fclose(file);
        }
    }
    else
    {
        printf("no input file");
    }

    return 0;
}