/* Направете два триъгълника с отместване.*/
#include <stdio.h>
#include <stdlib.h>
struct point
{
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    char board[15][15];
    for (int i = 0; i < 15; i++)

    {
        for (int j = 0; j < 15; j++)
        {
            board[i][j] = '-';
        }
    }
    struct point a = {3, 4};
    struct point b = {9, 9};
    struct point c = {10, 10};
    struct point d = {11, 14};
    for (int i = a.x; i <= b.y; i++)

    {
        for (int j = i; j <= b.y; j++)
        {
            board[i - 1][j - 1] = '@';
        }
    }
    for (int i = c.x; i <= d.y; i++)

    {
        for (int j = i; j <= d.y; j++)
        {
            board[i - 1][j - 1] = '@';
        }
    }
    for (int i = 0; i < 15; i++)

    {
        for (int j = 0; j < 15; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
