/*Опитайте се да използвате колкото се може
повече неявни преобразувания на типове в С-и
int main() {
char cValue = '0';
short sValue = - (cValue + cValue);
unsigned short usValue = - (cValue + cValue);
int iValue = sValue;
unsigned int uiValue = sValue;
long lValue = iValue;
unsigned long ulValue = iValue;
float fValue = ulValue;
double dfValue = ulValue; return 0; }*/
#include <stdio.h>
int main()
{
    char cValue = '0';
    printf("%c ",cValue);
    short sValue = -(cValue + cValue);
    printf("%d ",sValue);
    unsigned short usValue = -(cValue + cValue);
    printf("%d ",usValue);
    int iValue = sValue;
    printf("%d ",iValue);
    unsigned int uiValue = sValue;
    printf("%d ",uiValue);
    long lValue = iValue;
    printf("%d ",lValue);
    unsigned long ulValue = iValue;
    printf("%ul ",ulValue);
    float fValue = ulValue;
    printf("%g ",fValue);
    double dfValue = ulValue;
    printf("%g ",dfValue);
    return 0;
}
