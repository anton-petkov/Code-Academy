/*Дефинирайте структура с три елемента, които са променливи тип int, char и float.
Елементите да са наименование на продукт, цена и количество.
Задайте стойност на всеки от елементите, както следва: chocolate, 2.50, 50. Отпечатайте
на екрана.
*/
#include <stdio.h>
#include <string.h>
struct name
{
    int quantity;
    char name[128];
    float price;
};

int main()
{
    struct name newvariable;
    newvariable.quantity = 50;
    strcpy(newvariable.name, "chocolate");
    newvariable.price = 2.50;

    printf("Product name:%s ,Quantity:%d ,Price %g lv.", newvariable.name, newvariable.quantity, newvariable.price);
    return 0;
}