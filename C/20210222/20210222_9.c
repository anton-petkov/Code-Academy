/*Напишете функция, която преобразува число в низ и обратното,
като използва описанието от предишната задача.*/
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
    var.i = 61;
    enum type type;
    type = VALUE_STR;
    printValue(var, type);
    union var var2;
    strcpy(var2.str, "Hello world!");
    enum type type2;
    type2 = VALUE_INT;
    printValue(var2, type2);

    return 0;
}
