/* Дефинирайте структура, в която има член указател към самата
структура. Използвайте тази структура, за да дефинирате две променливи,
които се указват една друга.
*/
#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
    struct point *pointer;
};

int main(int argc, char *argv[])
{
    struct point a = {5, 7};
    struct point b = {3, 1};
    a.pointer = &b;
    b.pointer = &a;
    printf("The coordinates of C: x=%d, y=%d", b.pointer->x, b.pointer->y);

    return 0;
}
