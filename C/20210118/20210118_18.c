#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main()
{
    unsigned int sleep(unsigned int seconds);
    char light[] = "*............................";

    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(".");
            
        }
        light[strlen(light) - 1] = '\0';
        printf("%s", light);
        sleep(1);
        printf("%c[2K", 27);
        printf("\r");
    }

    return 0;
}
