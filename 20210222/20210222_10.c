/*Използвайки горните две задачи като база, обединете
обединението и описателя в една структура. Напишете функция,
която извежда съдържанието на новата структура.*/
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
struct sValue
{
    enum type sType;
    union var uVar;
};
void printValue(struct sValue value)
{
    if (VALUE_INT == value.sType)
    {
        printf("INT: %d\n", value.uVar.i);
    }
    else if (VALUE_STR == value.sType)
    {
        printf("STR: %s\n", value.uVar.str);
    }
}

int main()
{
    struct sValue value = {VALUE_INT, 12345};
    printValue(value);
    value.sType = VALUE_STR;
    strcpy(value.uVar.str, "Hello World!");
    printValue(value);

    return 0;
}
