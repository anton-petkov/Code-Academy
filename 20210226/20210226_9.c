/*Изведете резултата от деленето на две цели
числа от тип int като double с преобразуване и без такова
#include<stdio.h>
int main() {
int iValue = 47;
int iDiv = 3;
double dfRes = 0.0;
dfRes = (double) iValue / iDiv;
printf("Value of dfResof: %lf, V/D: %lf\n",
dfRes, iValue/iDiv);
return 0;
}
*/
#include <stdio.h>
int main()
{
    int iValue = 47;
    int iDiv = 3;
    double dfRes = 0.0;
    dfRes = (double)iValue / iDiv;
    printf("Value of dfResof: %lf, V/D: %lf\n",
           dfRes, iValue / iDiv);

    short int siValue = 13;

    int *pnValue = (int *)&siValue;
    *pnValue = 31;
    printf("%d, %ld", siValue, *pnValue);
    char chValue = 'x';
    double *pdValue = (double *)&chValue;
    *pdValue = 0.0;
    printf("%c, %f", chValue, *pdValue);
    return 0;
}