#include <stdio.h>

int main()
{
    int iKarNum = 3;
    double dKarPrice = 90.00;
    int iCamNum = 3;
    double dCamPrice = 100.00;
    int rez;
    printf("Ako zelaete karavana natisnete 1\n");
    printf("Ako zelaete kemper natisnete 2\n");
    scanf("%d", &rez);
    while (rez != 1 && rez != 2)
    {
        printf("Molq vuvedete 1 ili 2.\n");
        scanf("%d", &rez);
    }
    if (rez == 1)
    {
        printf("Vie iskate karavana koqto struva: %.2f lv.\n", dKarPrice);
    }
    if (rez == 2)
    {
        printf("Vie iskate kemper koqto struva: %.2f lv.\n", dCamPrice);
    }

    return 0;
}
