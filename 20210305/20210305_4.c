#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int size;
    printf("Enter size of the field: ");
    scanf("%d", &size);
    int **field = (int **)malloc(size * sizeof(int *));
    for (int i = 0; i < size; i++)
    {
        field[i] = (int *)malloc(size * sizeof(int));
    }
    srand(time(0));
    int pos_x = rand() % size;
    int pos_y = rand() % size;
    int choise;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            field[i][j] = (rand() % 4) + 1;
        }
    }

    field[rand() % size][rand() % size] = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (pos_x == j && pos_y == i)
            {
                printf("{%d}  ", field[i][j]);
            }
            else
            {
                printf(" %-3d ", field[i][j]);
            }
        }
        printf("\n");
    }

    int reserved_x = pos_x;
    int reserved_y = pos_y;

    while (1)
    {
        printf("\nType 1-left, 2-right, 3-down, 4-up, 5-return!\n");
        scanf("%d", &choise);
        printf("\n");
        switch (choise)
        {
        case 1:
            reserved_x = pos_x;
            reserved_y = pos_y;
            pos_x -= field[pos_y][pos_x];

            break;
        case 2:
            reserved_x = pos_x;
            reserved_y = pos_y;
            pos_x += field[pos_y][pos_x];

            break;
        case 3:
            reserved_x = pos_x;
            reserved_y = pos_y;
            pos_y += field[pos_y][pos_x];

            break;
        case 4:
            reserved_x = pos_x;
            reserved_y = pos_y;
            pos_y -= field[pos_y][pos_x];

            break;
        case 5:
            pos_y = reserved_y;
            pos_x = reserved_x;
            break;
        }
        if (pos_x < 0 || pos_x >= size || pos_y < 0 || pos_y >= size)
        {
            printf("You LOSE!");
            exit(0);
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                if (pos_x == j && pos_y == i)
                {
                    printf("{%d}  ", field[i][j]);
                }
                else
                {
                    printf(" %-3d ", field[i][j]);
                }
            }
            printf("\n");
        }
        if (field[pos_y][pos_x] == 0)
        {
            printf("You WIN!");
            exit(0);
        }
    }

    for (int i = 0; i < size; i++)
    {
        free(field[i]);
    }
    free(field);

    return 0;
}