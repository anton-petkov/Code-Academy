/* а) Направете поле 15 на 15, като принтирате тирета в конзолата.
b) Направете точка а(3, 4), като на това място принтирате @
c) Направете точка b(7, 10), като на това място принтирате @
d) Попълнете правоъгълника с @*/
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
   printf("The coordinates of point A: x=%d , y=%d\n",a.x,a.y);
   printf("The coordinates of point B: x=%d , y=%d",b.x,b.y);

    return 0;
}
