/*Напишете обединение от число и низ, както и описател с изброим
тип за съдържанието на обединението. Напишете функция, която
получава указател към обединението и изброимия тип и извежда
съответно низ или число.*/
#include <stdio.h>
#include <string.h>
enum type
{
    VALUE_INT,
    VALUE_STR
};
union var
{
    int i;
    char str[64];
};

void printValue(union var var, enum type type)
{
    if (VALUE_INT == type)
    {
        printf("INT: %d\n", var.i);
    }
    else if (VALUE_STR == type)
    {
        printf("STR: %s\n", var.str);
    }
}
int main()
{
    union var var;
    var.i = 4;
    enum type type;
    type = VALUE_INT;
    printValue(var, type);
    union var var2;
    strcpy(var2.str, "Hello world!");
    enum type type2;
    type2 = VALUE_STR;
    printValue(var2, type2);

    return 0;
}
