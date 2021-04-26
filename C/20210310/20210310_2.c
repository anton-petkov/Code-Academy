/*Напишете програма, която проверява дали всички отворени къдрави скоби {, (, [ за затворени ] ),},
Хвърлете грешка при липса на затварящи скоби и реда на който са.*/

#include <stdio.h>

int main(void)
{
    FILE *file1 = NULL;
    char *filename1 = ".\\brackets.txt";
    file1 = fopen(filename1, "rt");
    int counter1 = 0;
    int counter2 = 0;
    int counter3 = 0;

    char c;
    while ((c = getc(file1)) != EOF)
    {
        
        if (c == '{')
        {
            counter1++;
        }
        else if (c == '[')
        {
            counter2++;
        }
        else if (c == '(')
        {
            counter3++;
        }
        else if (c == '}')
        {

            counter1--;
        }
        else if (c == ']')
        {
            counter2--;
        }
        else if (c == ')')
        {
            counter3--;
        }
    }
    if (counter1 == 0 && counter2 == 0 && counter3 == 0)
    {
        printf("All brackets are fine!");
    }
    else
    {
        printf("There are not enough brackets!");
    }
    fclose(file1);
    return 0;
}
