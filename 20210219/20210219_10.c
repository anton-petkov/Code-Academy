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
    int size = 15;
    char board[size][size];
    for (int i = 0; i < size; i++)

    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = '-';
        }
    }
    struct point a = {1, 2};
    struct point b = {6, 6};

    for (int i = a.x; i <= b.y; i++)

    {
        for (int j = i; j <= b.y; j++)
        {
            board[i - 1][j - 1] = '@';
        }
    }
    for (int i = a.x; i <= b.y; i++)

    {
        for (int j = i + b.x + 1; j <= b.y + b.x + 1; j++)
        {
            board[i - 1][j - 1] = '@';
        }
    }
    for (int i = 0; i < size; i++)

    {
        for (int j = 0; j < size; j++)
        {
            printf("%c", board[i][j]);
        }
        printf("\n");
    }

    return 0;
}
