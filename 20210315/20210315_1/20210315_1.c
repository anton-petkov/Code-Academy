#include <stdio.h>
#include <stdlib.h>
#include "stack.c"
int main(void)
{
    int n = 1;
    while (n)
    {
        printf("Enter a digit:\n");
        scanf("%d", &n);
        push(n);
    }
    while (pop(&n))
        printf("%d", n);
    return 0;
}