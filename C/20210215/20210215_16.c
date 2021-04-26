/*Направете същото, както в задача 17, но използвайки
готовата функция strcpy. Потърсете онлайн как работи
тази функция и какви аргументи приема*/
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char *str1 = "A string to be copied.";
    char *str3 = "I am very good in strings coping!";
    char str2[50], str4[50];
    strcpy(str2, str1);
    strcpy(str4, str3);

    printf("%s \n%s", str2, str4);
    return 0;
}