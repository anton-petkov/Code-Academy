#include <stdio.h>

int main()
{
    int x = 10;
    int y = 10;
    int true = ++x + (x || y);
    printf("True = %d\n", true);
    true = ++x + x || y;
    printf("True = %d ", true);

    return 0;
}