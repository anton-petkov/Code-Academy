/*Напишете функция, която сортира лексикографски (по
азбучен ред) масив от символи (char[]). Използвайте “Метода на
мехурчето”, потърсете в интернет
*/

#include <stdio.h>
#include <string.h>
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(char s[], int lim)
{
    int i, j;
    for (i = 0; i < lim - 1; i++)
    {
        for (j = 0; j < lim - i - 1; j++)
        {
            if (s[j] > s[j + 1])
            {
                swap(&s[j], &s[j + 1]);
            }
        }
    }
}
int main(void)
{

    char s[] = "Anton";
    bubbleSort(s, strlen(s));
    printf("%s", s);
    return 0;
}