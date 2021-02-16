/*Направете същото, както в задача 18., но преди да
копирате, нулирайте стойността на стринговете, в
които ще копирате, използвайки готовата функция
memset. Потърсете онлайн как работи тази функция и
какви аргументи приема.*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *str1 = "A string to be copied.";
    char *str3 = "I am very good in strings coping!";
    char str2[50], str4[50];
    memset(str2, 0, 50);
    memset(str4, 0, 50);
    strcpy(str2, str1);
    strcpy(str4, str3);

    printf("%s \n%s", str2, str4);
    return 0;
}