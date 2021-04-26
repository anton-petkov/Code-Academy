#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lib.h"
void cartesianProduct(char *sets[][RSIZ], int *setLengths, char **currentSet, int numSets, int times)
{
    int i, j;

    if (times == numSets)
    {

        for (i = 0; i < times; i++)
        {
            printf("%s", currentSet[i]);
        }
        printf("\n");
    }
    else
    {
        for (j = 0; j < setLengths[times]; j++)
        {
            currentSet[times] = sets[times][j];
            cartesianProduct(sets, setLengths, currentSet, numSets, times + 1);
        }
    }
}