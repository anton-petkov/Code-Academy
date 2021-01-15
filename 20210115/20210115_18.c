#include <stdio.h>
void renting()
{
    int iKarNum = 3;
    double dKarPrice = 90.00;
    int iCamNum = 3;
    double dCamPrice = 100.00;
    int rez;
    int days;
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rez);
    while (rez != 1 && rez != 2)
    {
        printf("Molq vuvedete 1 ili 2.\n");
        scanf("%d", &rez);
    }
    printf("Molq vuvedete za kolko dni ]e naemete.\n");
    scanf("%d", &days);
    if (rez == 1)
    {
        printf("Vie iskate karavana koqto struva: %.2f lv.\n", dKarPrice * days);
    }
    if (rez == 2)
    {
        printf("Vie iskate kemper koqto struva: %.2f lv.\n", dCamPrice * days);
    }
}
int main()
{
    int rez;
    renting();

    printf("Ako zelaete ne]o drugo natisnete 1\n");
    printf("Ako iskate da zawyshite porychkata natisnete 0\n");
    scanf("%d", &rez);
    while (rez != 1 && rez != 0)
    {
        printf("Molq vuvedete 1 ili 0.\n");
        scanf("%d", &rez);
    }
    if (rez == 1)
    {
        renting();
    }
    if (rez == 0)
    {
        printf("Blagodarim za wa[ata porychka!");
    }
    return 0;
}
