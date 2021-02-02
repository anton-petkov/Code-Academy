#include <stdio.h>
#include <string.h>
int checkFloat(char c);
void trimStr(char *str);
int checkDigit(char c);
double atof(char *str);

int main()
{
    char s[] = "asd-123.22654659000100000";

    printf("%.60g", atof(s));
    return 0;
}
int checkFloat(char c)
{
    if ((c >= '0' && c <= '9') || c == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void trimStr(char *str)
{
    char str2[25];
    for (int i = 0; i < strlen(str) - 1; i++)
    {
        if (!checkFloat(str[i]))
        {
            strcpy(str2, &str[i + 1]);
        }
        else
        {
            strcpy(str2, &str[i]);
            break;
        }
    }
    strcpy(str, str2);
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
    trimStr(str);
    int i = 0;
    double value = 0.0;
    double power = 1.0;
    int negative = 0;
    if (str[i] == '-')
    {
        negative = -1;
        i++;
    }

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
    return negative * (value / power);
}