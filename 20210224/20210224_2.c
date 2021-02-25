/*Напишете макрос swap(t, x, y), койтo променя местата на двата аргумента
от тип t.*/
#include <stdio.h>
#define SWAP(t, x, y) { t temp = x; x = y; y = temp;}

int main()
{
    int a = 10;
    int b = 30;
    printf("Before the swap :A= %d, B=%d\n", a, b);
    SWAP(int, a, b);
    printf("After the swap :A= %d, B=%d", a, b);
    return 0;
}
