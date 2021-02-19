/* Представете служителите във фирма в структура с членове:
пореден номер, име, презиме, фамилия, позиция, трудов стаж в години,
заплата в лева, указател към структурата, описващ неговия началник.
Напишете програма, която въвежда 10 служителя, които се съхраняват в
масив от описаните структури. Въвеждането на служителите може да стане
на два паса, първо въвеждане на всички данни без указателя към
началника и на втори пас, указване на всеки служител кой е неговият
началник.*/
#include <stdio.h>
#include <stdlib.h>
void fill(struct employee *dataBase, int cMax);
void getBoss(struct employee *dataBase, struct employee base, int cMax);
void print(struct employee *dataBase, int cMax);
struct employee
{
    int num;
    char name[30];
    char surname[30];
    char family[30];
    char position[30];
    int salary;
    int years;
    struct employee *boss;
};

int main(int argc, char *argv[])
{
    const int cMax = 3;
    struct employee base = {0, "No", "", "One", "", 0, 0};
    struct employee dataBase[cMax];
    fill(dataBase, cMax);
    getBoss(dataBase, base, cMax);
    print(dataBase, cMax);
    return 0;
}
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
               "is number %d (enter number of the boss, 0 if its no one)",
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
