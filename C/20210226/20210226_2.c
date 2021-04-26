/*Създайте нов потребителски тип
към тип long long int. Използвайте го във функцията
printf, отпечатайте размера.*/
#include <stdio.h>
#include <string.h>

int main()
{
    typedef long long int lli;
    printf("%d", sizeof(lli));
    return 0;
}
