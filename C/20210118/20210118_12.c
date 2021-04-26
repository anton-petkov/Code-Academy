#include <stdio.h>
int main()
{
    int nX = 0;
    scanf("%d", &nX);
    int nY = 0;
    scanf("%d", &nY);
    if (nX == nY)
    {
        printf("%d and %d are equal\n", nX, nY);
    }
    else
    {
        printf("%d and %d are not equal\n", nX, nY);
    }
    if (nX > nY)
    {
        printf("%d is greater than %d\n", nX, nY);
    }
    else{
         printf("%d is greater than %d\n", nY, nX);
    }
    if (nX != nY)
    {
        printf("%d is different from %d\n", nX, nY);
    }
    else{
         printf("%d is the same as than %d\n", nX, nY);
    }
    if (nX <= nY)
    {
        printf("%d is less or the same as %d\n", nX, nY);
    }
    else{
         printf("%d is greater than %d\n", nX, nY);
    }
    return 0;
}