/*Дефинирайте функция, която събира
две променливи и приема и изпълнява предефиниран
указател, като стойност.*/
#include <stdio.h>
#include <string.h>
typedef int (*TFnSum)(int, int);
int myPlus(int a, int b)
{
    return a + b;
}

int main()
{
    TFnSum pfun = NULL;
    pfun = myPlus;
    printf("sum of (0x%x,0x%x): 0x%x\n", 33, 65, pfun(33, 65));

    return 0;
}
