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

typedef struct employee
{
    int num;
    char name[30];
    char surname[30];
    char family[30];
    char position[30];
    int salary;
    int years;
    struct employee *boss;
} t_employee;
void fill(t_employee *dataBase, int cMax);
void getBoss(t_employee *dataBase, struct employee base, int cMax);
void print(t_employee *dataBase, int cMax);
int main(int argc, char *argv[])
{
    const int cMax = 3;
    t_employee base = {0, "No", "", "One", "", 0, 0};
    t_employee *dataBase = (t_employee *)malloc(cMax);
    fill(dataBase, cMax);
    getBoss(dataBase, base, cMax);
    print(dataBase, cMax);
    free(dataBase);
    return 0;
}
void fill(t_employee *dataBase, int cMax)
{
    for (int i = 0; i < cMax; i++)
    {
        dataBase->num = i;
        printf("Please enter name:");
        scanf("%s", &dataBase->name);
        printf("Please enter surname:");
        scanf("%s", &dataBase->surname);
        printf("Please enter family:");
        scanf("%s", &dataBase->family);
        printf("Please enter position:");
        scanf("%s", &dataBase->position);
        printf("Please enter salary:");
        scanf("%d", &dataBase->salary);
        printf("Please enter years:");
        scanf("%d", &dataBase->years);
        printf("\n");
        dataBase++;
    }
}
void getBoss(t_employee *dataBase, t_employee base, int cMax)
{
    t_employee *ptr = dataBase;
    for (int i = 0; i < cMax; i++)
    {

        int choise;

        printf("Please enter who is boss of employee %s %s who "
               "is number %d (enter number of the boss, 0 if its no one)",
               dataBase->name, dataBase->family, dataBase->num + 1);
        scanf("%d", &choise);
        if (choise <= 0 || choise > cMax)
        {
            dataBase->boss = &base;
        }

        else
        {

            dataBase->boss = &ptr[choise - 1];
        }
        dataBase++;
        fflush(stdin);
    }
}
void print(t_employee *dataBase, int cMax)
{
    for (int i = 0; i < cMax; i++)
    {
        printf("Empployee number %d called %s %s %s on position %s gets %d"
               "and has been working here for %d years and his boss is %s %s!\n",
               dataBase->num + 1, dataBase->name, dataBase->surname,
               dataBase->family, dataBase->position, dataBase->salary, dataBase->years,
               dataBase->boss->name, dataBase->boss->family);
        dataBase++;
    }
}
