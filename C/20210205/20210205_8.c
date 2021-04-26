/*апишете функците atoi, itoa, atof и reverse, които писахме
преди като използвате указател вместо индексиране на масив.
*/

#include <stdio.h>
int atoi(char *s);
void itoa(int n, char *s);

void reverse(char *s);

int main(void)
{

    int a = 123;
    char b[] = "123";
    printf("%d\n", atoi(b));
    char c[] = "775";
    reverse(c);
    itoa(a, c);
    printf("%s", c);

    return 0;
}
void reverse(char *s)
{
    char *a, *b, temp;

    b = s + strlen(s) - 1;
    for (a = s; a < b; ++a, --b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
void itoa(int n, char *s)
{

    do
    {
        *s = (n % 10) + '0';
        n /= 10;
        *s++;
    } while (n > 0);
}
int atoi(char *s)
{
    int result = 0;
    while (*s != 0)
    {
        result *= 10;
        result += (*s - '0');
        *s++;
    }
    return result;
}