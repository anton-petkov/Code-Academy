/*Напишете функция, която рекурсивно изчислява произведението на
числата от 1 до 30.*/
#include <stdio.h>
unsigned long long factoriel(int n)
{
    if (n >= 1)
    {
        return n * factoriel(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    printf("Factoriel of 30 : %llu\n", factoriel(30));
}
