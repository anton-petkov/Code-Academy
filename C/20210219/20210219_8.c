/* Направете структура struct rect, която съдържа в себе си две
точки. Създайте обект от тип тази структура наречен screen. Използвайте
функцията makepoint за да зададете начална точка на екрана (0, 0) и
крайна точка (15, 15). Запълнете пространството между тях с тирета. */
#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};
struct rect
{
    struct point a;
    struct point b;
};

struct point makepoint(int x, int y)
{
    struct point point = {x, y};
    return point;
}

int main(int argc, char *argv[])
{
    struct rect screen = {makepoint(0, 0), makepoint(15, 15)};
    char board[screen.b.x][screen.b.y];
    for (int i = screen.a.x; i < screen.b.x; i++)

    {
        for (int j = screen.a.y; j < screen.b.y; j++)
        {
            board[i][j] = '-';
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
