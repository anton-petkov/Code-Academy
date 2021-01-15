#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <wchar.h>

int main()
{

    float fTomatoPrice = 4.5f;
    float fTomatoWeight;
    float fFlourPrice = 1.8f;
    float fFlourWeight;
    float fCandyPrice = 1.5f;
    float fCandyWeight;
    float fYogurtPrice = 0.5f;
    float fYogurtNum;
    float fLollipopPrice = 0.15f;
    float fLollipopNum;
    float fIceCreamPrice = 0.6f;
    float fIceCreamtNum;

    printf("Welcome to our shop! Today we offer : tomatoes, flour, candy, yogurt, lollipos, Icecream.\n");
    printf("What quantity of tomatoes would you need? If not please type \"0\" ");
    scanf("%f", &fTomatoWeight);

    printf("What quantity of flour would you need?  If not please type \"0\" ");
    scanf("%f", &fFlourWeight);

    printf("What quantity of candy would you need? If not please type \"0\" ");
    scanf("%f", &fCandyWeight);

    printf("What quantity of yogurt would you need? If not please type \"0\" ");
    scanf("%f", &fYogurtNum);

    printf("What quantity of lollipos would you need? If not please type \"0\" ");
    scanf("%f", &fLollipopNum);

    printf("What quantity of icecream would you need? If not please type \"0\" ");
    scanf("%f", &fIceCreamtNum);

    float fTomatoTotal = fTomatoWeight * fTomatoPrice;
    float fFlourTotal = fFlourWeight * fFlourPrice;
    float fCandyTotal = fCandyPrice * fCandyWeight;
    float fYogurtTotal = fYogurtNum * fYogurtPrice;
    float fLollipopTotal = fLollipopNum * fLollipopPrice;
    float fIceCreamTotal = fIceCreamPrice * fIceCreamtNum;

    printf("Order:\n");
    printf("Tomatoes: %.2f lv.\n", fTomatoTotal);
    printf("Flour: %.2f lv.\n", fFlourTotal);
    printf("Candy: %.2f lv.\n", fCandyTotal);
    printf("Yogurt: %.2f lv.\n", fYogurtTotal);
    printf("Lollipops: %.2f lv.\n", fLollipopTotal);
    printf("Icecream: %.2f lv.\n", fIceCreamTotal);
    float fTotal = fIceCreamTotal + fLollipopTotal + fTomatoTotal + fYogurtTotal + fFlourTotal + fCandyTotal;
    printf("Total: %.2f lv.\n", fTotal);

    return 0;
}
