#include <stdio.h>
int main()
{
    int nX = 1, nY = 2;
    printf("\nInit values: X= %d, Y= %d\n", nX, nY);
    nX = 1 + 2, 2 * 3, 3 + 4;// когато няма скоби пресмнятането става от дясно на ляво 
    nY = (7 * 8, 8 + 9, 9 - 4);// когато има  скоби пресмнятането става от ляво на дясно 
    printf("\nX= %d, Y= %d\n", nX, nY);
    return 0;
}
