/*Напишете програма, която обработва Ctrl+C
Ctrl+D, Ctrl+Z*/
#include <stdio.h>
#include <signal.h>
#include <Windows.h>
void handleSignal(int iSignal)
{
    printf("\nHandle signal %d\n", iSignal);
}
int main()
{
    char string[50];
    signal(SIGINT, handleSignal);

    while (1)
    {
        if (fread(string, 1, 10, stdin) == 0)
        {
            handleSignal(2);
            break;
        }
    }
    return 0;
}