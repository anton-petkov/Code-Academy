/* Използвайте do-while цикъл, за да напишете функцията void itoa(int n, char s[]), 
която преобразува число в символен низ (обратната функция на atoi). do-while цикълът 
e необходим, тъй като в масива с ще трябва да се постави поне един символ, дори ако 
n е нула. Ако n = 123, за да вземем последната цифра, трябва да разделим n по модул(%) 
на основата на бройната система 10. За да получите чаръктър число, трябва да съберете
резултата с '0'. За да вземете следващото число, трябва да разделите n на 10. Това продължава 
докато n е различно от нула. Това генерира низа в обратен ред – 321, затова обърнете низа. */

#include <stdio.h>
#include <string.h>
void itoa(int n, char s[]);
void getReversed(char s[]);
int main()
{
    int n = 0;
    char s[12];
    printf("Enter the deciaml value: ");
    scanf("%d", &n);
    itoa(n, s);
    return 0;
}
void itoa(int n, char s[])
{
    int i = 0, sign = n;

    if (n < 0)
        n = -n;
    do
    {
        s[i++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);
    if (sign < 0)
        s[i++] = '-';

    getReversed(s);
    printf("The string value is: %s", s);
}
void getReversed(char s[])
{
    for (int i = 0, j = strlen(s) - 1; i < j; i++, j--)
    {
        char temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}