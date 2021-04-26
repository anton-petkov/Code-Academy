
/*Напишете програма за комбиниране на низове, примерно:
(aA , bB) x (c12 , d34) -> ( aAc12, aAd34, bBc12, bBd34 )
т.н. декартово произведение. Програмата получава произволен брой текстови файлове описани 
на командния ред и прави декартово произведение на редовете в тях.
Резултатът се извежда на стандартния изход.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib.c"

int main(int argc, char *argv[])
{
    char input[LSIZ];
    int n = argc - 1;
    char *sets[n][RSIZ];
    int i = 0, j = 0, y = 1;
    int *setLengths = (int *)calloc(sizeof(int), n + 1);
    char **currentSet = (char **)calloc(sizeof(char), n + 1);
    FILE *file = NULL;
    if (argc <= 2)
    {
        printf("There should be at lest two files included!");
    }
    else
    {
        while (--argc > 0)
        {
            if ((file = fopen(argv[y], "r")) == NULL)
            {
                printf("Failed to open %s\n", argv[y]);
                return 1;
            }
            else
            {
                for (j = 0; j < RSIZ && fgets(input, sizeof(input), file); ++j)
                {
                    int lineLen = strlen(input) + 1;
                    sets[i][j] = strncpy(malloc(lineLen), input, lineLen);
                    for (int l = 0; l < strlen(sets[i][j]); l++)
                    {
                        if (sets[i][j][l] == '\n')
                        {
                            setLengths[i]++;
                            sets[i][j][l] = '\0';
                        }
                    }
                }
                j = 0;
                fclose(file);
            }
            i++;
            y++;
        }
    }
    cartesianProduct(sets, setLengths, currentSet, n, 0);

    return 0;
}