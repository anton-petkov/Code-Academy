#include <stdio.h>
int main(void)
{
    int counterLeters = 0;
    int counterNumber = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            counterLeters++;
        }
        else if (c >= '0' && c <= '9')
        {
            counterNumber++;
            continue;
            
        }
    }
    printf("Numbers: %d\n", counterNumber);
    printf("Letters: %d", counterLeters);
    return 0;
}