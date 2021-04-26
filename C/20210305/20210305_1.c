#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct shelf
{
    int shortBoard;
    int longBoard;
    int smallBracket;
    int bigBracket;
    int screw;

} t_shelf;

int main()
{
    t_shelf *available = (t_shelf *)malloc(sizeof(t_shelf));
    t_shelf *needed = (t_shelf *)malloc(sizeof(t_shelf));
    printf("Enter available long boards: ");
    scanf("%d", &available->longBoard);
    printf("Enter available short boards: ");
    fflush(stdin);
    scanf("%d", &available->shortBoard);
    printf("Enter available small brackets: ");
    fflush(stdin);
    scanf("%d", &available->smallBracket);
    printf("Enter available big brackets: ");
    fflush(stdin);
    scanf("%d", &available->bigBracket);
    printf("Enter available screws: ");
    fflush(stdin);
    scanf("%d", &available->screw);
    needed->longBoard = 4;
    needed->shortBoard = 6;
    needed->smallBracket = 12;
    needed->bigBracket = 2;
    needed->screw = 12;

    int count[5];

    count[0] = available->longBoard / needed->longBoard;

    count[1] = available->shortBoard / needed->shortBoard;

    count[2] = available->smallBracket / needed->smallBracket;

    count[3] = available->bigBracket / needed->bigBracket;

    count[4] = available->screw / needed->screw;
    int final = count[0];
    for (int i = 0; i < 5; i++)
    {
        if (final > count[i])
        {
            final = count[i];
        }
    }

    printf("With the materials on stock (%d - long boards, %d - short boards, %d - small brackets, %d - big brackets "
           "and %d - screws) can be made %d shelves.",
           available->longBoard, available->shortBoard,
           available->smallBracket, available->bigBracket, available->screw, final);
    free(available);
    free(needed);
    return 0;
}