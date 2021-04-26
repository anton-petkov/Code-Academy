/*Реализирайте условна компилация в зависимост от макрос
DEBUG (дефиниране на макрос през компилатора: gcc -DDEBUG)*/
#include <stdio.h>
void debugMsg(const char *pszMsg)
{
#if !defined( DEBUG)
    printf("DEBUG: %s\n", pszMsg);
#endif
}
int main(void)
{
    debugMsg("Lalala");
    return 0;
}