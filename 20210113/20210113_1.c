#include <stdio.h>

int main()
{
    char a = 255;
    a = a + 10;

    printf("%c", a); // ще получим празен ред на конзолата,
                     // тъй като char e с размер 256 и след като добавим 10 го overflow-ваме 
                     //и релано конзолата принтира char=9 което е TAB
                     

    return 0;
}
