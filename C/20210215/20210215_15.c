/*Ще копираме стрингове. Дефинирайте и инизиалицирайте два стринга:
string 1: "A string to be copied."
string3: "I am very good in strings coping!"
Дефинирайте и два празни стринга, в които ще копираме string 2,
string4. Дефинирайте функция, която през пойнтери ще извърши
копирането от стринг към стринг. Използвайте while и факта, че
*pointer++ отива към следващия символ.
Помислете за терминиращия символ. Принтирайте двата изкопирани
стринга.
Извикайте функцията и копирайте от string1 в string4.*/
#include <stdio.h>
void cpy(char *a, char *b, char *c, char *d)
{

    while (*a != '\0')
    {
        *b++ = *a++;
    }
    *b = '\0';
    while (*c != '\0')

    {
        *d++ = *c++;
    }
    *d = '\0';
}

int main(int argc, char **argv)
{
    char *str1 = "A string to be copied.";
    char *str3 = "I am very good in strings coping!";
    char str2[50], str4[50];
    cpy(str1, str2, str3, str4);
    printf("%s \n%s", str2, str4);
    return 0;
}