#include <stdio.h>
int main(void)
{
    int A = 0;
    int B = 0;
    (!(A && B) == !A || !B) ? printf("Theorem one holds for A=0 B=0\n") : printf("Theorem one does not hold for A=0 B=0\n");
    (!(A && B) == !A || !B) ? printf("Theorem two holds for A=0 B=0\n") : printf("Theorem two does not hold for A=0 B=0\n");

    A = 1;
    B = 0;
    (!(A && B) == !A || !B) ? printf("Theorem one holdsfor A=1 B=0\n") : printf("Theorem one does not hold forA=1 B=0\n");
    (!(A && B) == !A || !B) ? printf("Theorem two holds for A=1 B=0\n") : printf("Theorem two does not hold forA=1 B=0\n");

    A = 0;
    B = 1;
    (!(A && B) == !A || !B) ? printf("Theorem one holds for A=0 B=1\n") : printf("Theorem one does not hold for A=0 B=1\n");
    (!(A && B) == !A || !B) ? printf("Theorem two holds for A=0 B=1\n") : printf("Theorem two does not hold forA=0 B=1\n");

    A = 1;
    B = 1;
    (!(A && B) == !A || !B) ? printf("Theorem one holds for A=1 B=1\n") : printf("Theorem one does not hold for A=1 B=1\n");
    (!(A && B) == !A || !B) ? printf("Theorem two holds for A=1 B=1\n") : printf("Theorem two does not hold for A=1 B=1\n");

    return 0;
}