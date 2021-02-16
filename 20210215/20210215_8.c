/*Дефинирайте и инициализирайте променлива и пойнтер
към нея. Отпечатайте адреса на пойнтера с %p с printf.*/
#include <stdio.h>

int main(int argc, char **argv)
{
    int a;
    int *b = &a;
    printf("%p", b);    
    return 0;
}