/*Напишете функция, която изчислява произведението на
числата от 1 до 30.*/
#include <stdio.h>
unsigned long long int factoriel(int n)
{
    unsigned long long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}
int main()
{
    printf("Factoriel of 30: %llu\n", factoriel(30));
}
