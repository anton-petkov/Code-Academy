#include <stdio.h>
int checkDigit(char c);
double atof(char *str);

int main()
{
    char s[] = "123.220000";
    printf("%.60g", atof(s));
    return 0;
}
int checkDigit(char c)
{
    if (c >= '0' && c <= '9')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
double atof(char *str)
{
    int i = 0;
    double value = 0.0;
    double power = 1.0;

    for (value; checkDigit(str[i]); i++)
    {
        value = 10 * value + (str[i] - '0');
    }
    i++;

    for (power; checkDigit(str[i]); i++)
    {
        value = 10.0 * value + (str[i] - '0');
        power *= 10;
    }
    return value / power;
}