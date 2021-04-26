#include <stdio.h>

void print(FILE *ifp)
{
    int c;
    while ((c = getc(ifp)) != EOF)
    {
        printf("%c", c);
    }
}

int main(int argc, char *argv[])
{
    FILE *file = NULL;
    if (argc == 1)
    {
        print(stdin);
    }
    else
    {
        while (--argc > 0)
        {
            if ((file = fopen(*++argv, "r")) == NULL)
            {
                printf("cat: failed to open %s\n", *argv);
                return 1;
            }
            else
            {
                print(file);
                fclose(file);
            }
        }
    }
    return 0;
}
