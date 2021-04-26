/*Кое е по добре да купите: А броя дини от сорт мелон с диаметър Х сантиметра
и дебелина на кората D сантиметър или В броя дини с диаметър У сантиметра и
същата дебелина на кората D2? Създайте структура диня с два елемента -
диаметър и дебелина на кората заделете динамично с malloc() за масив от А на
брой дини от сорт мелон и попълнете данните за диаметър между 15 и 140 см с
функцията rand(), за всяка една диня в масива и дебелина на кората между 0.5 и
3.5 см. Създайте структура диня с два елемента - диаметър и дебелина на кората
заделете динамично с malloc() за масив от В на брой дини от сорт пъмпкин и
попълнете данните за диаметър между 35 и 95 см с функцията rand(), за всяка
една диня в масива и дебелина на кората между 0.3 и 0.9 см. Намерете средната
големина на динята и средната дебелина на кората и ги съпоставете с тези от
втория масив. Изведете на екрана купчината от кой сорт е по добре да се купи.
Изход:
По-добре е да се купят ... дини с диаметър ... сантиметра и кора с дебелина D
см вместо ... дини с диаметър ... см и дебелина на кората D1 см.*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAXSIZE 10

typedef struct
{
    int flesh;
    float peel;
} melon;

int main(void)
{
    int volumeA;
    int avgAflesh;
    float avgAPeel;
    int volumeB;
    int avgBflesh;
    float avgBPeel;
    int a, b;
    printf("How many melon(A) watermelons?");
    scanf("%d", &a);
    printf("How many pumpkin(B) watermelons?");
    scanf("%d", &b);
    srand(time(NULL));
    melon *A = (melon *)malloc(a * sizeof(melon));
    melon *B = (melon *)malloc(b * sizeof(melon));

    for (int i = 0; i < a; i++)
    {
        A[i].flesh = (rand() % 126) + 15;
        A[i].peel = ((float)rand() / RAND_MAX) + (rand() % 3) + 0.5;
        avgAflesh += A[i].flesh;
        avgAPeel += A[i].peel;
        volumeA += A[i].flesh - (A[i].peel * 2);
    }
    avgAflesh /= a;
    avgAPeel /= a;

    for (int i = 0; i < b; i++)
    {
        float r = A[i].peel = (((rand() % 7) + 3) / 10.0);
        B[i].flesh = (rand() % 61) + 35;
        B[i].peel = r;
        avgBflesh += B[i].flesh;
        avgBPeel += B[i].peel;
        volumeB += B[i].flesh - (B[i].peel * 2);
    }
    avgBflesh /= b;
    avgBPeel /= b;
    volumeA /= a;
    volumeB /= b;
    if (volumeA > volumeB)
    {
        printf("It`s better to get %d melons with diameter of %d and peel %g than  %d melons with diameter of %d and peel %g .", a, avgAflesh, avgAPeel, b, avgBflesh, avgBPeel);
    }
    else
        printf("It`s better to get %d melons with diameter of %d and peel %g than  %d melons with diameter of %d and peel %g .", b, avgBflesh, avgBPeel, a, avgAflesh, avgAPeel);

    return 0;
}