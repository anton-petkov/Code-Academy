/*Напишете функция, която сортира лексикографски масив от
символи (char[]) използвайки qsort.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int values[] = {88, 56, 100, 2, 25};

int cmpfunc(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}

int main()
{
    char string[] = "string that is stringed";

    qsort(string, strlen(string), sizeof(char), cmpfunc);
    printf("%s", string);
    return (0);
}