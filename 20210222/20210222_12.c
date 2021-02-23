/*Напишете програма, която използва битови полета. Битовите полета да
са членове на структура и да са от следните типове: unsigned int и char.
Задайте им размер short int 3 бита, char 6 бита. struct <tagStruct> {
Ctype m_bitField : N;
CType2 m_bitField2 : M;
};
Дефинирайте променлива на структурата и инициализирайте ги със
стойност 7 и съответно ‘c’.
Разпечатайте елементите. Разпечатайте и големината на структурата.
Добавете още членове от съществуващите типове и разпечатайте
големината на структурата отново. Пренаредете ги като
последователност, да са char, char, short int, short int. Как се променя
големината на структурата?
Опитайте същото с препроцесор #pragma pack(1)*/
#include <stdio.h>
#pragma pack(1)
struct sTest
{
    short int val : 3;
    char val2 : 6;
};
struct sTest2
{
    short int val : 3;
    char val2 : 6;
    short int val3 : 3;
    char val4 : 6;
    short int val5 : 3;
    char val6 : 6;
};
struct sTest3
{

    char val2 : 6;
    char val4 : 6;
    char val6 : 6;
    short int val : 3;
    short int val3 : 3;
    short int val5 : 3;
};

int main()
{
    struct sTest data = {7, 'c'};
    printf("val: %d, val2: %c ! SizeOf:%d\n", data.val, data.val2, sizeof(data));

    struct sTest2 data2 = {7, 'c'};
    printf("Size of bigger struct:%d\n", sizeof(data2));
    struct sTest2 data3 = {7, 'c'};
    printf("Size of bigger struct:%d\n", sizeof(data3));
    return 0;
}