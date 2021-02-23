/*Напишете обединение от три стойности: цяло число, число с
плаваща запетая и низ. Инициализирайте отделните членове и ги
изведете на екрана*/
#include <stdio.h>
union uTest
{
    int m_nValue;
    float m_fValue;
    char *m_szText;
};
int main()
{
    union uTest data = {0};
    printf("nValue: %d, fValue: %f, Text: %s\n", data.m_nValue, data.m_fValue, data.m_szText);
    data.m_nValue = 12;
    data.m_fValue = 3.14;
    data.m_szText = "this is a test";

    printf("nValue: %d, fValue: %f, Text: %s\n", data.m_nValue, data.m_fValue, data.m_szText);
    return 0;
}