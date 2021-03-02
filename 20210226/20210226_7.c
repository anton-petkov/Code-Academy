/*Напишете масив от структури наречен kaytab[ ], като
използвате тази, дефинирана в горното упражнение - потребителски тип
key_t, която съдържа символен низ и число. Инициализирайте масива с
всички ключови думи на С.*/
#include <stdio.h>
#include <string.h>
typedef struct key
{

    char str[25];
    int i;
} t_key;
int main()
{
    t_key keytab[] = {
        "auto",
        0,
        "break",
        0,
        "case",
        0,
        "char",
        0,
        "const",
        0,
        "continue",
        0,
        "default",
        0,
        "do",
        0,
        "double",
        0,
        "else",
        0,
        "enum",
        0,
        "extren",
        0,
        "float",
        0,
        "for",
        0,
        "goto",
        0,
        "if",
        0,
        "int",
        0,
        "long",
        0,
        "register",
        0,
        "short",
        0,
        "return",
        0,
        "signed",
        0,
        "sizeof",
        0,
        "static",
        0,
        "struct",
        0,
        "switch",
        0,
        "typedef",
        0,
        "union",
        0,
        "unigned",
        0,
        "void",
        0,
        "volatile",
        0,
        "while",
        0,
    };

    for (int i = 0; i < 33; i++)
    {
        printf("%s ", keytab[i].str);
    }

    return 0;
}
