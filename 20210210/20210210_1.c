/*Напишете програма, която сумира всички елементи на масив
намиращи се на четна позиция:
int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
Декларирайте пойнтер към първата нечетна позиция, инкрементирайте
пойнтера по подходящ начин, за да извършите сумирането.*/
#include <stdio.h>
int main()
{
    int arr[10] = {23, 91, 36, 4, 9, 99, 87, 11, 2, 33};
    int *p = arr;
    int lim = 10, sum = 0;
    while (lim != 0)
    {
        sum += *p;
        p += 2;
        lim -= 2;
    }

    printf("%d", sum);

    return 0;
}