#include <stdio.h>
int g_iValue = 5;

void test(int i)
{
    i++;
}
int main()
{
    test(g_iValue);
    test(g_iValue);
    test(g_iValue);
    printf("%d", g_iValue);
    return 0;
}
