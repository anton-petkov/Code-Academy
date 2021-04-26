/* Напишете функция, която изчислява разстоянието между две
точки в равнината. Нека функцията да приема два параметъра, които са
структури ТPoint с два члена X и Y координати.*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct point
{
    int x;
    int y;
};
double distance(struct point a, struct point b)
{
    double result = sqrt(((b.x - a.x) * (b.x - a.x)) + ((b.y - a.y) * (b.y - a.y)));
}
int main(int argc, char *argv[])
{
    struct point a = {3, 4};
    struct point b = {7, 10};
    printf("The distance between A and B is :%f", distance(a, b));
    return 0;
}
