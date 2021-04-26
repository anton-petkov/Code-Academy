/*Дефинирайте потребителски тип към
указател.Създайте променлива, насочете указателя
към нея, използвайки новия потребителски тип.*/
#include <stdio.h>
#include <string.h>

int main()
{
    typedef int *t_pointer;
    int i = 255;
    t_pointer p = &i;
    printf("%d", *p);
    return 0;
}
