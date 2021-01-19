#include <stdio.h>

int main()
{
    int iX = 13;
    int iY = 44;
    int iResult = 0;
    iResult = iX - iY;
    printf("%d - %d= %d \n", iX, iY, iResult);
    iResult = iY / iX;
    printf("%d / %d= %d \n", iY, iX, iResult);
    iResult = iY % iX;
    printf("%d % %d= %d \n", iY, iX, iResult);
    float fX = 13.0F;
    

    float fY = 44.60F;
  
    float fResult = 0;
    fResult = fX * fY;
    printf("%.2f * %.2f= %.2f \n", fX, fY, fResult);
    fResult = fX + fY;
    printf("%.2f + %.2f= %.2f \n", fX, fY, fResult);
    return 0;
}