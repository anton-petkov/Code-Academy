/*Напишете програма, която да проверява дали 2 стринга (масива) са
анаграми и имат всичките букви на другата дума. Използвайте функции.*/
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int anag(char buff[], char target[]);
void sort(char *str);
int main()
{
    int (*pfPass)(char *buff, char *target) = NULL;
    pfPass = anag;
    char str1[] = "abc";
    char str2[] = "vab";
    (*pfPass)(str1, str2) ? printf("The words are anagrams!") : printf("The words are not anagrams!");
    return 0;
}
int anag(char buff[], char target[])
{
    void (*pfSort)(char *buff) = NULL;
    pfSort = sort;
    int flag = 0;
    if (strlen(buff) != strlen(target))
    {
        return 0;
    }
    (*pfSort)(buff);
    (*pfSort)(target);
    for (int i = 0; i < strlen(buff); i++)
    {
        if (buff[i] != target[i])
        {
            flag = 0;
            break;
        }
        else
        {
            flag = 1;
        }
    }

    return flag;
}
void sort(char *str)
{
    char temp;
    int i, j;
    int n = strlen(str);

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (str[i] > str[j])
            {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
