
/*Напишете функция void reverse(char s[]), която обръща низа char s[
]. Използвайте for цикъл с два аргумента, разделени със запетая
i = 0, j = strlen(s) – 1; i < j; i++, j-- , за да обърнете стринга.*/
#include <stdio.h>
#include <string.h>
void reverse(char s[])
{
    for (int i = 0, j = (strlen(s) - 1); i < j; i++, j--)
    {
        char temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
    printf("%s\n", s);
}

int main()
{

    char s[] = "Hello world!";
    reverse(s);

    return 0;
}
