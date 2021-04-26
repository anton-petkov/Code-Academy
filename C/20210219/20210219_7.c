/* Направете функция struct point makepoint(int x, int y), която
създава две точки.*/
#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};
struct point makepoint(int x, int y)
{
    struct point point = {x, y};
    return point;
}

int main(int argc, char *argv[])
{

    struct point a = makepoint(8, 9);
    struct point b = makepoint(7, 1);
    printf("The coordinates of point A: x=%d , y=%d\n", a.x, a.y);
    printf("The coordinates of point B: x=%d , y=%d", b.x, b.y);

    return 0;
}
