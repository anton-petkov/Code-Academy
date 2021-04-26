/*Направете обединение с елементи тип int, int, char. Дайте
стойност на елементите един по един -7,10 и “c” и изведете
тези стойности на конзолата.
Инициализирайте и трите и изведете стойностите им на
конзолата.*/
#include <stdio.h>
union uTest
{
    int val1;
    int val2;
    char val3;
};
int main()
{
    union uTest data = {0};
    data.val1 = -7;
    data.val2 = 10;
    data.val3 = 'c';

    printf("nValue: %d, fValue: %d, Text: %c\n", data.val1, data.val2, data.val3);
    return 0;
}