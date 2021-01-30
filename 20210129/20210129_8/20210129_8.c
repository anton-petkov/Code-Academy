#include <stdio.h>
#include "f.h"

int main()
{
    int a, b, c;
    printf("Please enter value for a:");
    scanf("%d", &a);
    printf("Please enter value for b:");
    scanf("%d", &b);
    printf("Please enter value for c:");
    scanf("%d", &c);
    int added = add(a, b);
    int incremented = incr(c);
    printf("Added value is: %d\n", added);
    printf("Incremented value is: %d\n", incremented);
    return 0;
}
