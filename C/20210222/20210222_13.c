/*Направете обединение с членове unsigned short и char. Ограничете
използваните битове до 6. Инициализирайте и изведете на
конзолата.*/
#include <stdio.h>
#pragma pack(1)
union sTest
{
    unsigned short int val : 6;
    char val2 : 6;
};

int main()
{
    union sTest data = {99};
    printf("val: %d, val2: %c ! SizeOf:%d\n", data.val, data.val2, sizeof(data));

    return 0;
}