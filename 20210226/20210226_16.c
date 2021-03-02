/*16.Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.*/
/*Да се състави програма, с помощта на която играч може да
играе (с право на връщане на ходовете) следната игра СОЛИТЕР:
На игралното поле са поставени 16 номерирани пулове и три реда
с по осем позиции. Целта е да се извадят от игра всички пулове с
изключение на номер 1. Може да се прескача през някой пул на
свободна клетка, но не се разрешава движение по диагонал.
Например възможни са ходове 1-9; 2-10; 1-2 и т.н. По тази схема 1
прескача 9 и 9х излиза от игра – отстранява се от полето, след
това 2 прескача 10 и 10 отпада от играта; по-нататък 1 прескача 2 и
2 излиза от игра.
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int field[3][8] = {0};
    int a = 9;
    for (int i = 1; i < 3; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            field[i][j] = a++;
        }
        a = 1;
    }
    int end = 1;
    int pullVal, row, col;
    char dir;
    while (1)
    {
        end = 0;
        for (int l = 0; l < 3; l++)
        {
            for (int k = 0; k < 8; k++)
            {
                if (field[l][k] == 1)
                {
                    end = 1;
                }

                printf("%d\t", field[l][k]);
            }
            printf("\n");
        }
        if (end == 0)
        {
            printf("You LOOSE!");
            exit(1);
        }

        printf("Choose pull to move!\n");
        scanf("%d", &pullVal);

        for (int k = 0; k < 3; k++)
        {
            for (int l = 0; l < 8; l++)
            {
                if (field[k][l] == pullVal)
                {
                    row = k;
                    col = l;
                }
            }
        }
        fflush(stdin);
        printf("Type l-left, r-right, u-up , d-down!\n");
        scanf("%c", &dir);
        switch (dir)
        {
        case 'l':
            if (field[row][col - 2] == 0 || col - 2 >= 0)
            {
                field[row][col - 2] = field[row][col];
                int temp = field[row][col - 1];
                field[row][col - 1] = 0;
                field[row][col] = 0;
            }
            else
                printf("WRONG MOVE! try again!\n");
            break;
        case 'r':
            if (field[row][col + 2] == 0 || col + 2 < 8)
            {
                field[row][col + 2] = field[row][col];
                int temp = field[row][col + 1];
                field[row][col + 1] = 0;
                field[row][col] = 0;
            }
            else
                printf("WRONG MOVE! try again!\n");
            break;
        case 'u':
            if (field[row - 2][col] == 0 || (row - 2) >= 0)
            {
                field[row - 2][col] = field[row][col];
                int temp = field[row - 1][col];
                field[row - 1][col] = 0;
                field[row][col] = 0;
            }
            else
                printf("WRONG MOVE! try again!\n");
            break;
        case 'd':
            if (field[row + 2][col] == 0 || row + 2 < 3)
            {
                field[row + 2][col] = field[row][col];
                int temp = field[row + 1][col];
                field[row + 1][col] = 0;
                field[row][col] = 0;
            }
            else
                printf("WRONG MOVE! try again!\n");
            break;

        default:
            break;
        }
    }
    printf("You WIN!");
    return 0;
}