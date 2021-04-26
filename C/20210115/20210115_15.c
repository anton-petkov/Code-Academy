#include <stdio.h>

void test(int i)
{
    i++;
}
int main()
{
    static int g_iValue = 5;
    test(g_iValue);
    test(g_iValue);
    test(g_iValue);
    printf("%d", g_iValue);
    return 0;
}
