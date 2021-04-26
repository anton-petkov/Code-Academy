#include <stdio.h>
double areaOfTriangle(int a, int b);
double areaOfRectangle(int a, int b);

int main()
{
    int a, b;
    printf("Please enter value for a:");
    scanf("%d", &a);
    printf("Please enter value for b:");
    scanf("%d", &b);
    int tri = areaOfTriangle(a, b);
    int rec = areaOfRectangle(a, b);
    printf("The area of the triangle is: %d\n", tri);
    printf("The area of the square is: %d\n", rec);
    return 0;
}
double areaOfTriangle(int a, int b)
{

    return (a * b) / 2;
}
double areaOfRectangle(int a, int b)
{
    return areaOfTriangle(a, b) * 2;
}
