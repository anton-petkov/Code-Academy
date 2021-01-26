#include <stdio.h>
int main(void)
{
    char c;
    int nl = 0;
    while (c  != EOF)
    {   c=getchar();
        if ((c >='A' && c<='Z')||(c >='a' && c<='z'))
        {
            putchar(c);
        }
    }
    
    return 0;
}