/*Пренапишете Задача 2 от 05.03.2021г за Пощенските такси на дадена
куриерска фирма се определят според тежестта на пратките (с точност до цял грам) и обема,
както е показано в таблицата.
При влизане в някоя функция отваряте файл за писане и при успешно излизане от функцията
записвате във файла function_name() success . Това го правим за всички функции. Ако има
някаква грешка записваме грешката във файла и името на функцията.*/
#include <stdio.h>
#include <stdlib.h>

typedef struct shipmentStructure
{
    int weight;
    int volume;
} shipmentStruct;
void enterData(shipmentStruct *shipmentsList, int shipmentsCount, FILE *pfile)
{
    for (int i = 0; i < shipmentsCount; i++)
    {
        printf("Please enter weight of shipment No.%d: ", i + 1);
        scanf(" %d", &shipmentsList[i].weight);
        printf("Please enter volume of shipment No.%d: ", i + 1);
        scanf(" %d", &shipmentsList[i].volume);
        printf("\n");
    }
    fputs("enterData() success\n", pfile);
}
void calculate(shipmentStruct *shipmentsList, int shipmentsCount, float *oneByOnePrice, int totalWeight, int totalVolume, float *totalPrice, FILE *pfile)
{
    for (int i = 0; i < shipmentsCount; i++)
    {
        if (shipmentsList[i].weight <= 20)
            *oneByOnePrice += 0.46;
        else if (shipmentsList[i].weight <= 50)
            *oneByOnePrice += 0.69;
        else if (shipmentsList[i].weight <= 100)
            *oneByOnePrice += 1.02;
        else if (shipmentsList[i].weight <= 200)
            *oneByOnePrice += 1.75;
        else if (shipmentsList[i].weight <= 350)
            *oneByOnePrice += 2.13;
        else if (shipmentsList[i].weight <= 500)
            *oneByOnePrice += 2.44;
        else if (shipmentsList[i].weight <= 1000)
            *oneByOnePrice += 3.20;
        else if (shipmentsList[i].weight <= 2000)
            *oneByOnePrice += 4.27;
        else if (shipmentsList[i].weight <= 3000)
            *oneByOnePrice += 5.03;
    }
    for (int i = 0; i < shipmentsCount; i++)
    {
        if (shipmentsList[i].volume <= 10)
            *oneByOnePrice += 0.01;
        else if (shipmentsList[i].volume <= 50)
            *oneByOnePrice += 0.11;
        else if (shipmentsList[i].volume <= 100)
            *oneByOnePrice += 0.22;
        else if (shipmentsList[i].volume <= 150)
            *oneByOnePrice += 0.33;
        else if (shipmentsList[i].volume <= 250)
            *oneByOnePrice += 0.56;
        else if (shipmentsList[i].volume <= 400)
            *oneByOnePrice += 1.50;
        else if (shipmentsList[i].volume <= 500)
            *oneByOnePrice += 3.11;
        else if (shipmentsList[i].volume <= 600)
            *oneByOnePrice += 4.89;
        else if (shipmentsList[i].volume > 600)
            *oneByOnePrice += 5.79;
    }

    for (int i = 0; i < shipmentsCount; i++)
    {
        totalWeight += shipmentsList[i].weight;
        totalVolume += shipmentsList[i].volume;
    }

    if (totalWeight <= 20)
        *totalPrice += 0.46;
    else if (totalWeight <= 50)
        *totalPrice += 0.69;
    else if (totalWeight <= 100)
        *totalPrice += 1.02;
    else if (totalWeight <= 200)
        *totalPrice += 1.75;
    else if (totalWeight <= 350)
        *totalPrice += 2.13;
    else if (totalWeight <= 500)
        *totalPrice += 2.44;
    else if (totalWeight <= 1000)
        *totalPrice += 3.20;
    else if (totalWeight <= 2000)
        *totalPrice += 4.27;
    else if (totalWeight <= 3000)
        *totalPrice += 5.03;

    if (totalVolume <= 10)
        *totalPrice += 0.01;
    else if (totalVolume <= 50)
        *totalPrice += 0.11;
    else if (totalVolume <= 100)
        *totalPrice += 0.22;
    else if (totalVolume <= 150)
        *totalPrice += 0.33;
    else if (totalVolume <= 250)
        *totalPrice += 0.56;
    else if (totalVolume <= 400)
        *totalPrice += 1.50;
    else if (totalVolume <= 500)
        *totalPrice += 3.11;
    else if (totalVolume <= 600)
        *totalPrice += 4.89;
    else if (totalVolume > 600)
        *totalPrice += 5.79;

    fputs("calculate() success\n", pfile);
}
int main(void)
{
    FILE *pfile = fopen("result.txt", "w+");

    int i, totalWeight = 0, totalVolume = 0;
    float oneByOnePrice = 0, totalPrice = 0;
    int shipmentsCount;
    printf("How many shipments do you have?\nShipments count: ");
    scanf(" %d", &shipmentsCount);
    printf("\n");

    shipmentStruct *shipmentsList = (shipmentStruct *)malloc(sizeof(shipmentStruct) * shipmentsCount);
    enterData(shipmentsList, shipmentsCount, pfile);
    calculate(shipmentsList, shipmentsCount, &oneByOnePrice, totalWeight, totalVolume, &totalPrice, pfile);

    printf("\nYour final price if you send your packages ONE BY ONE is: %.2f\n", oneByOnePrice);
    printf("Your final price if you send your packages ALL AS ONE is: %.2f\n", totalPrice);

    if (oneByOnePrice < totalPrice)
    {
        printf("It is better to send your packages ONE BY ONE!\n");
    }
    else if (oneByOnePrice > totalPrice)
    {
        printf("\nIt is better to send your packages ALL AS ONE!\n\n");
    }
    else if (oneByOnePrice == totalPrice)
    {
        printf("\nBoth ways the price is equal!\n\n");
    }
    free(shipmentsList);
    fclose(pfile);
    return 0;
}