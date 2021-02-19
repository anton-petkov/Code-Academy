#include <stdio.h>
#include <stdlib.h>
#include "lib.h"
void fill(struct employee *dataBase, int cMax)
{
    for (int i = 0; i < cMax; i++)
    {
        dataBase[i].num = i;
        printf("Please enter name:");
        scanf("%s", &dataBase[i].name);
        printf("Please enter surname:");
        scanf("%s", &dataBase[i].surname);
        printf("Please enter family:");
        scanf("%s", &dataBase[i].family);
        printf("Please enter position:");
        scanf("%s", &dataBase[i].position);
        printf("Please enter salary:");
        scanf("%d", &dataBase[i].salary);
        printf("Please enter years:");
        scanf("%d", &dataBase[i].years);
        printf("\n");
    }
}
void getBoss(struct employee *dataBase, struct employee base, int cMax)
{
    for (int i = 0; i < cMax; i++)
    {

        int choise;

        printf("Please enter who is boss of employee %s %s who "
               "is number %d (enter number of the boss)",
               dataBase[i].name, dataBase[i].family, dataBase[i].num + 1);
        scanf("%d", &choise);
        if (choise <= 0 || choise > cMax)
        {
            dataBase[i].boss = &base;
        }

        else
        {

            dataBase[i].boss = &dataBase[choise - 1];
        }
        fflush(stdin);
    }
}
void print(struct employee *dataBase, int cMax)
{
    for (int i = 0; i < cMax; i++)
    {
        printf("Empployee number %d calles %s %s %s on position %s gets %d"
               "and has been working here for %d years and his boss is %s %s!\n",
               dataBase[i].num + 1, dataBase[i].name, dataBase[i].surname,
               dataBase[i].family, dataBase[i].position, dataBase[i].salary, dataBase[i].years,
               dataBase[i].boss->name, dataBase[i].boss->family);
    }
}