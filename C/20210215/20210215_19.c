/*Дефинирайте стринг: „Baba, kaka, mama” заменете „а“
със „о“
*/
#include <stdio.h>
void cpy(char a[])
{
    while (*a != '\0')
    {
        if (*a == 'a')
        {
            *a = 'o';
            a++;
        }
        else
        {
            a++;
        }
    }
}
int main(int argc, char **argv)
{
    char str1[] = "Baba kaka mama";

    cpy(str1);
    printf("%s ", str1);
    return 0;
}