#include <stdio.h>
#include <string.h>

int main(void)
{
    char s[100];
    *s='\0';
    char c;
    while ((c = getchar()) != EOF)
    {
        strncat(s, &c, 1);
        if (c == '\n')
        {
            while ((s[strlen(s)-2] == ' ') || (s[strlen(s) -2] == '\t'))
            {
                s[strlen(s)-2]='\0';
            }
            printf("%s",s);
            *s='\0';
        }
    }
    
    return 0;
}